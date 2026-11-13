#ifndef BOTW_GHS_INTRINSICS_H
#define BOTW_GHS_INTRINSICS_H

// Mask positions use PowerPC bit numbering; reversed endpoints wrap.
extern "C" unsigned __RLWINM(unsigned, unsigned, unsigned, unsigned)
    __attribute__((const));
extern "C" unsigned __LWARX(volatile void*, int);
extern "C" unsigned __STWCX(volatile void*, int, unsigned);
extern "C" void __DCBST(volatile void*, int);
extern "C" void __memory_changed(void);

#endif
