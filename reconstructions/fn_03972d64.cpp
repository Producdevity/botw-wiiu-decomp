#include "botw/ghs_intrinsics.h"

extern "C" void fn_03972d64(unsigned char* object) {
    for (;;) {
        unsigned old;
        volatile unsigned* value = reinterpret_cast<volatile unsigned*>(object + 712);
        old = __LWARX(value, 0);
        __DCBST(value, 0);
        if (__STWCX(value, 0, old + 1))
            return;
    }
}
