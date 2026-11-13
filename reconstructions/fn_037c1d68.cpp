#include "botw/ghs_intrinsics.h"

inline bool store_conditional(volatile void* value, unsigned desired) {
    return __STWCX(value, 0, desired) != 0;
}

extern "C" void fn_037c1d68(unsigned char* object) {
    for (;;) {
        volatile unsigned* value = reinterpret_cast<volatile unsigned*>(object + 1372);
        unsigned old = __LWARX(value, 0);
        __DCBST(value, 0);
        if (store_conditional(value, old | 1))
            return;
    }
}
