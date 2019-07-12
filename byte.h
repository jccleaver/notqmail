#ifndef BYTE_H
#define BYTE_H

#include <string.h>

extern unsigned int byte_chr();
extern unsigned int byte_rchr();
extern void byte_copy();
extern void byte_copyr();
extern int byte_diff();
#define byte_zero(s,n) memset(s,0,n)

#define byte_equal(s,n,t) (!byte_diff((s),(n),(t)))

#endif
