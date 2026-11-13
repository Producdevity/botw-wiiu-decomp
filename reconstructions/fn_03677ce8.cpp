#include "botw/ghs_intrinsics.h"

extern "C" void fn_03677ce8(unsigned char* object) {
    for (;;) {
        volatile unsigned* value = reinterpret_cast<volatile unsigned*>(object + 1128);
        __DCBST(value, 0);
        unsigned replacement = 0;
        unsigned old = __LWARX(value, 0);
        if (__STWCX(value, 0, replacement))
            return;
    }
}
