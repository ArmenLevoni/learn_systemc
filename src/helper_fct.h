

#ifndef _HELPER_FCT_H_
#define _HELPER_FCT_H_

#include <systemc.h>

/*
 * Examples:
 *
 * DISPLAY("Hello");
 * DISPLAY("N = " << myfloatvar << ", S = " << myintegervar);
 * 
*/

#define DISPLAY(msg) cout << sc_time_stamp() << ":\t"  << msg << endl;

#endif