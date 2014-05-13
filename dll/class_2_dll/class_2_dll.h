/* 
 * File:   class_2_dll.h
 * Author: pmonfort
 *
 * Created on 3 de octubre de 2013, 17:15
 */

#ifndef CLASS_2_DLL_H
#define	CLASS_2_DLL_H

#if defined DLL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif

#include "class_2_dll_interface.h"

extern "C" class DECLDIR class_2_dll : public class_2_dll_interface { //Exportamos la clase
public:
    //Propiedades

    //Métodos
    class_2_dll();
    class_2_dll(const class_2_dll& orig);
    virtual ~class_2_dll();

    void prueba();
private:
    //Propiedades

    //Métodos
    void init();
};

extern "C" DECLDIR class_2_dll * CreateNetObjectInstace() {
    return new class_2_dll();
}

extern "C" DECLDIR void ReleaseNetObject(class_2_dll * object) {
    delete object;
}

#endif	/* CLASS_2_DLL_H */