#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/281300570/ip_checksum.o \
	${OBJECTDIR}/_ext/281300570/rawping.o \
	${OBJECTDIR}/raw_ping_driver.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-lws2_32

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/raw_ping.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/raw_ping.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/raw_ping ${OBJECTFILES} ${LDLIBSOPTIONS} -static-libstdc++ -static-libgcc

${OBJECTDIR}/_ext/281300570/ip_checksum.o: nbproject/Makefile-${CND_CONF}.mk /C/Documents\ and\ Settings/pmonfort/Mis\ documentos/Prjs/ejemplos/ping/raw_ping/ip_checksum.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/281300570
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/281300570/ip_checksum.o /C/Documents\ and\ Settings/pmonfort/Mis\ documentos/Prjs/ejemplos/ping/raw_ping/ip_checksum.cpp

${OBJECTDIR}/_ext/281300570/rawping.o: nbproject/Makefile-${CND_CONF}.mk /C/Documents\ and\ Settings/pmonfort/Mis\ documentos/Prjs/ejemplos/ping/raw_ping/rawping.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/281300570
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/281300570/rawping.o /C/Documents\ and\ Settings/pmonfort/Mis\ documentos/Prjs/ejemplos/ping/raw_ping/rawping.cpp

${OBJECTDIR}/raw_ping_driver.o: nbproject/Makefile-${CND_CONF}.mk raw_ping_driver.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/raw_ping_driver.o raw_ping_driver.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/raw_ping.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
