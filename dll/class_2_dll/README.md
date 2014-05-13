class_2_dll_interface
========

Ejemplo de una clase compilada en una dll.

Instrucciones de uso:

#define objDLL  "libclass_2_dll.dll"

//Header con las definiciones de las funciones puras virtuales, necesario junto a la .dll para poder usarlo
#include "class_2_dll_interface.h"

//Definimos el tipo de datos acorde a la funcion exportada en la dll
typedef class_2_dll * (* CreatePtrFn)();
typedef void * (* DeletePtrFn)(class_2_dll *);

int main(){
	//Ya en el main, cargamos la .dll
	HMODULE objDLLptr = LoadLibrary(objDLL);

	//Obtenemos un puntero a las funciones que nos interesa, que son las funciones que crean y destruyen el objeto
	CreatePtrFn pfnCreateObj = (CreatePtrFn) GetProcAddress(objDLLptr, "CreateobjObjectInstace");
	DeletePtrFn pfnReleaseObj = (DeletePtrFn) GetProcAddress(objDLLptr, "ReleaseobjObject");

	//Instanciamos la clase utilizando la función exportada que devuelve un puntero a la clase
	class_2_dll * obj = (*pfnCreateObj)(); //Esto llama al método constructor de la clase
	obj->init(); //obj ya es un objeto instanciado de nuestra clase, ya se pueden usar todas sus propiedades y métodos
		
	//Cuando acabamos, hay que destruir el objeto
	(*pfnReleaseObj)(obj);

	// Y por último descargamos la .dll
	FreeLibrary(objDLLptr);
}