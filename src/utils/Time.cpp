/*////////////////////////////////////////////////////////
 * File:        Time.cpp
 * Author:      Blankycan
 * Date:        2013-09-20
/////////////////////////////////////// © Blankycan 2013 */
#include "Time.h"
///////////////////////////////////////////////////////////
using namespace Util;
///////////////////////////////////////////////////////////

struct timespec Time::time;

long Time::TimeMs()
{
    return GetTimeMs();
}

long Time::GetTimeMs()
{
    #if defined (LINUX)
    clock_gettime(CLOCK_REALTIME, &time);
    long ms = time.tv_sec * 1000 + (time.tv_nsec * 0.000001);
    return ms;
    #elif defined (WINDOWS)
    // QueryPerformanceCounter
    #endif
}