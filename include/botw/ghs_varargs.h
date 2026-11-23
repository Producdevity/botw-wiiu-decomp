#ifndef BOTW_GHS_VARARGS_H
#define BOTW_GHS_VARARGS_H

// GHS names the caller's stack argument area __builtin_va_alist and the
// prologue's register save area __va_intreg; other front ends need declarations.
#ifndef __ghs__
extern char __builtin_va_alist;
extern char __va_intreg[];
#endif

// GHS va_list: counts of consumed GPR/FPR arguments, then the caller's stack
// argument area and the prologue's register save area.
struct GhsArgumentList {
    unsigned char used_gprs;
    unsigned char used_fprs;
    char* overflow_area;
    char* register_area;
};

#endif
