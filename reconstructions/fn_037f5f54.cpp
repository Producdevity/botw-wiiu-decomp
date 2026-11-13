#include "botw/ghs_intrinsics.h"
#include "botw/atomic.h"

extern "C" unsigned char* fn_037f5f54(unsigned char* object) {
    for (;;) {
        unsigned old;
        volatile unsigned* value = reinterpret_cast<volatile unsigned*>(object + 112);
        old = __LWARX(value, 0);
        __DCBST(value, 0);
        if (__STWCX(value, 0, old - 1))
            return object;
    }
}
