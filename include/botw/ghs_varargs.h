#ifndef BOTW_GHS_VARARGS_H
#define BOTW_GHS_VARARGS_H

// GHS names the caller's stack argument area __builtin_va_alist and the
// prologue's register save area __va_intreg; other front ends need declarations.
#ifndef __ghs__
extern char __builtin_va_alist;
extern char __va_intreg[];
#endif

#endif
