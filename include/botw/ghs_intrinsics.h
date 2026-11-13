#ifndef BOTW_GHS_INTRINSICS_H
#define BOTW_GHS_INTRINSICS_H

extern "C" unsigned __LWARX(volatile void*, int);
extern "C" unsigned __STWCX(volatile void*, int, unsigned);
extern "C" void __DCBST(volatile void*, int);
extern "C" void __memory_changed(void);

#endif
