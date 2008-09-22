/* KallistiOS ##version##

   arch/dreamcast/include/arch/gdb.h
   (c)2002 Dan Potter
   
*/

#ifndef __ARCH_GDB_H
#define __ARCH_GDB_H

#include <sys/cdefs.h>
__BEGIN_DECLS

/* Initialize the GDB stub */
void gdb_init();

/* Manually raise a GDB breakpoint */
void gdb_breakpoint();

__END_DECLS

#endif	/* __ARCH_GDB_H */

