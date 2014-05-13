/* 
 * File:   netInterface.h
 * Author: pmonfort
 *
 * Created on 4 de octubre de 2013, 12:03
 */

#ifndef NETUTILSIFACE_H
#define	NETUTILSIFACE_H

//Las funciones aquí definidas son las que se exportarán
class netUtilsIface{
public:
    virtual int			initialize(const char * equipo)=0;
    virtual void		prueba()=0;
};
#endif	/* NETINTERFACE_H */

