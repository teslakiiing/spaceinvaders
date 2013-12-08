/*////////////////////////////////////////////////////////
 * File:        Time.h
 * Author:      Blankycan
 * Date:        2013-09-20
/////////////////////////////////////// © Blankycan 2013 */
#ifndef UTIL_TIME_H
#define	UTIL_TIME_H
///////////////////////////////////////////////////////////
#include "os.h"
///////////////////////////////////////////////////////////
#if defined (LINUX)
	#include <time.h>
#elif defined (WINDOWS)

#endif
///////////////////////////////////////////////////////////

namespace Util
{
class Time
{
public:
    /* Returns current time in milliseconds */
    long TimeMs();
    /* Returns current time in milliseconds */
    static long GetTimeMs();
private:
    /* Keeps the time */
    static struct timespec time;
};
}   // End of namespace Util

///////////////////////////////////////////////////////////
#endif	/* UTIL_TIME_H */

