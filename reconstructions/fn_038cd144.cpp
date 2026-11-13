#include "botw/ghs_intrinsics.h"

extern "C" unsigned fn_038cd144(void*, unsigned char* object) {
    for (;;) {
        volatile unsigned* value = reinterpret_cast<volatile unsigned*>(object + 8);
        unsigned old = __LWARX(value, 0);
        __DCBST(value, 0);
        if (__STWCX(value, 0, old + 1))
            return old;
    }
}
