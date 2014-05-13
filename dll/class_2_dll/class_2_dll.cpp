/* 
 * File:   net.cpp
 * Author: pmonfort
 * 
 * Created on 3 de octubre de 2013, 17:15
 */
#define DLL_EXPORT

#include <windows.h>
#include <iostream> //cout y demas
#include <cstdio> //printf
#include <winsock2.h> //getMac
#include <iphlpapi.h> //getMac
#include <string> //strings
#include <sstream> //stringstream
#include <iomanip> //setw

#include "class_2_dll.h"

/*
//Se usa asi:
//Ruta hacia la dll
//#define NETDLL  "../dynamic_libs/netUtils/dist/Debug/MinGW-Windows/libnetutils.dll"
//Header con las funciones puras virtuales (para no mostrar el código)
//#include "../dynamic_libs/netUtils/netUtilsIface.h"

//Definimos el tipo de datos acorde a la funcion exportada en la dll
//typedef netUtilsIface * (* CreateNetPtrFn)();
//typedef void * (* DeleteNetPtrFn)(netUtilsIface *);
//y en el main:
//Cargamos la .dll
HMODULE netDLL = LoadLibrary(NETDLL);
//Obtenemos un puntero a las funciones que nos interesa, que son las funciones que crean y destruyen el objeto
CreateNetPtrFn pfnCreateNet = (CreateNetPtrFn) GetProcAddress(netDLL, "CreateNetObjectInstace");
DeleteNetPtrFn pfnReleaseNet = (DeleteNetPtrFn) GetProcAddress(netDLL, "ReleaseNetObject");
//Instanciamos la clase utilizando la función exportada que devuelve un puntero a la clase
netUtilsIface * net = (*pfnCreateNet)();
//Usamos el objeto
if (net->initialize("192.168.71.133")) {
	net->queryMac();
	net->ping();
    }
//Eliminamos el objeto
(*pfnReleaseNet)(net);
// Y por último, cuando acabamos, Descargamos la .dll
FreeLibrary(netDLL);
*/


netutils::netutils() {
    this->init();
}

netutils::netutils(const netutils& orig) {
}

netutils::~netutils() {
    std::cout << "God bye World desde la .dll!" << std::endl;
}

void netutils::init() {

}

int netutils::initialize(const char * algo) {
    this->init();
}

void netutils::prueba() {
    std::cout << "Hello World desde la .dll!" << std::endl;
}