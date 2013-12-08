/* /////////////////////////////////////////////////////////////////////
//  File:       LinuxEventHandler.h
//  Author      Blankycan
// Copyright 2013 Blankycan
///////////////////////////////////////////////////////////////////// */
#ifndef LINUXEVENTHANDLER_H
#define	LINUXEVENTHANDLER_H
////////////////////////////////////////////////////////////////////////
#include "os.h"
////////////////////////////////////////////////////////////////////////
#if defined (LINUX)
    #include <X11/Xlib.h>
#endif
////////////////////////////////////////////////////////////////////////
#include "WindowHandler.h"
class WindowHandler;
////////////////////////////////////////////////////////////////////////
// Only for Linux
#ifdef LINUX
////////////////////////////////////////////////////////////////////////

class LinuxEventHandler
{
public:
    /* Default constructor */
    LinuxEventHandler(WindowHandler *window);
    /* Default destructor */
    ~LinuxEventHandler();
    
    /* Handles next XNextEvent */
    void HandleXEvent(int times = 1);
    
private:
    /* Main window */
    WindowHandler *window;
    /* XEvent */
    XEvent event;
    /* Delete message, for when closing window */
    Atom wmDeleteMessage;
    
};

////////////////////////////////////////////////////////////////////////
#endif  // LINUX
////////////////////////////////////////////////////////////////////////
#endif  // LINUXEVENTHANDLER_H

