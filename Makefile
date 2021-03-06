#############################################################################
# Makefile for building: Project_JolUp
# Generated by qmake (2.01a) (Qt 4.8.6) on: ? 11? 24 15:59:12 2014
# Project:  Project_JolUp.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -o Makefile Project_JolUp.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I. -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = JolUpMain.cpp \
		LectureAdd.cpp \
		LectureModify.cpp \
		LectureNodeFunc.cpp \
		main.cpp \
		MyInfo.cpp moc_JolUpMain.cpp \
		moc_LectureAdd.cpp \
		moc_LectureModify.cpp \
		moc_MyInfo.cpp
OBJECTS       = JolUpMain.o \
		LectureAdd.o \
		LectureModify.o \
		LectureNodeFunc.o \
		main.o \
		MyInfo.o \
		moc_JolUpMain.o \
		moc_LectureAdd.o \
		moc_LectureModify.o \
		moc_MyInfo.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		Project_JolUp.pro
QMAKE_TARGET  = Project_JolUp
DESTDIR       = 
TARGET        = Project_JolUp

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_JolUpMain.h ui_LectureAdd.h ui_LectureModify.h ui_MyInfo.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Project_JolUp.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile Project_JolUp.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile Project_JolUp.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Project_JolUp1.0.0 || $(MKDIR) .tmp/Project_JolUp1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Project_JolUp1.0.0/ && $(COPY_FILE) --parents JolUpMain.h LectureAdd.h LectureData.h LectureFunc.h LectureManager.h LectureModify.h LectureNodeFunc.h MyInfo.h MyInfoData.h .tmp/Project_JolUp1.0.0/ && $(COPY_FILE) --parents JolUpMain.cpp LectureAdd.cpp LectureModify.cpp LectureNodeFunc.cpp main.cpp MyInfo.cpp .tmp/Project_JolUp1.0.0/ && $(COPY_FILE) --parents JolUpMain.ui LectureAdd.ui LectureModify.ui MyInfo.ui .tmp/Project_JolUp1.0.0/ && (cd `dirname .tmp/Project_JolUp1.0.0` && $(TAR) Project_JolUp1.0.0.tar Project_JolUp1.0.0 && $(COMPRESS) Project_JolUp1.0.0.tar) && $(MOVE) `dirname .tmp/Project_JolUp1.0.0`/Project_JolUp1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Project_JolUp1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_JolUpMain.cpp moc_LectureAdd.cpp moc_LectureModify.cpp moc_MyInfo.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_JolUpMain.cpp moc_LectureAdd.cpp moc_LectureModify.cpp moc_MyInfo.cpp
moc_JolUpMain.cpp: ui_JolUpMain.h \
		JolUpMain.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) JolUpMain.h -o moc_JolUpMain.cpp

moc_LectureAdd.cpp: ui_LectureAdd.h \
		LectureAdd.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) LectureAdd.h -o moc_LectureAdd.cpp

moc_LectureModify.cpp: ui_LectureModify.h \
		LectureModify.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) LectureModify.h -o moc_LectureModify.cpp

moc_MyInfo.cpp: ui_MyInfo.h \
		MyInfo.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) MyInfo.h -o moc_MyInfo.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_JolUpMain.h ui_LectureAdd.h ui_LectureModify.h ui_MyInfo.h
compiler_uic_clean:
	-$(DEL_FILE) ui_JolUpMain.h ui_LectureAdd.h ui_LectureModify.h ui_MyInfo.h
ui_JolUpMain.h: JolUpMain.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic JolUpMain.ui -o ui_JolUpMain.h

ui_LectureAdd.h: LectureAdd.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic LectureAdd.ui -o ui_LectureAdd.h

ui_LectureModify.h: LectureModify.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic LectureModify.ui -o ui_LectureModify.h

ui_MyInfo.h: MyInfo.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic MyInfo.ui -o ui_MyInfo.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

JolUpMain.o: JolUpMain.cpp JolUpMain.h \
		ui_JolUpMain.h \
		LectureAdd.h \
		ui_LectureAdd.h \
		LectureModify.h \
		ui_LectureModify.h \
		MyInfo.h \
		ui_MyInfo.h \
		MyInfoData.h \
		LectureManager.h \
		LectureData.h \
		LectureNodeFunc.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o JolUpMain.o JolUpMain.cpp

LectureAdd.o: LectureAdd.cpp LectureAdd.h \
		ui_LectureAdd.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LectureAdd.o LectureAdd.cpp

LectureModify.o: LectureModify.cpp LectureModify.h \
		ui_LectureModify.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LectureModify.o LectureModify.cpp

LectureNodeFunc.o: LectureNodeFunc.cpp JolUpMain.h \
		ui_JolUpMain.h \
		LectureNodeFunc.h \
		LectureManager.h \
		LectureData.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LectureNodeFunc.o LectureNodeFunc.cpp

main.o: main.cpp JolUpMain.h \
		ui_JolUpMain.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

MyInfo.o: MyInfo.cpp MyInfo.h \
		ui_MyInfo.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MyInfo.o MyInfo.cpp

moc_JolUpMain.o: moc_JolUpMain.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_JolUpMain.o moc_JolUpMain.cpp

moc_LectureAdd.o: moc_LectureAdd.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_LectureAdd.o moc_LectureAdd.cpp

moc_LectureModify.o: moc_LectureModify.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_LectureModify.o moc_LectureModify.cpp

moc_MyInfo.o: moc_MyInfo.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_MyInfo.o moc_MyInfo.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

