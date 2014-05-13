/* 
 * File:   net.h
 * Author: pmonfort
 *
 * Created on 3 de octubre de 2013, 17:15
 */

#ifndef NETUTILS_H
#define	NETUTILS_H

#if defined DLL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif

#include "class_2_dll_interface.h"

extern "C" class DECLDIR netutils : public netUtilsIface { //Exportamos la clase
public:
    //Propiedades

    //Métodos
    netutils();
    netutils(const netutils& orig);
    virtual ~netutils();

    void prueba();
    int initialize(const char *);
private:
    //Propiedades

    //Métodos
    void init();
};

extern "C" DECLDIR netutils * CreateNetObjectInstace() {
    return new netutils();
}

extern "C" DECLDIR void ReleaseNetObject(netutils * object) {
    delete object;
}

#endif	/* NET_H */