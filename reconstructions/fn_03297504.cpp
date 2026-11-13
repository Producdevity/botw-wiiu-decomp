#include "botw/ghs_intrinsics.h"

extern "C" unsigned fn_03297504(volatile unsigned* input) {
    unsigned old;
    volatile unsigned* value = input;
    do {
        old = __LWARX(value, 0);
        __DCBST(value, 0);
    } while (!__STWCX(value, 0, old - 1));
    return old;
}
