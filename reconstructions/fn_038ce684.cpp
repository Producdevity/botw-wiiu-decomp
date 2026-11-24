#include "botw/ghs_intrinsics.h"

inline bool store_conditional(volatile void* value, unsigned desired) {
    return __STWCX(value, 0, desired) != 0;
}

extern "C" void fn_038ce22c(void* p, unsigned v);

extern "C" void fn_038ce684(unsigned char* object, unsigned a, unsigned b, unsigned c, unsigned d, unsigned e) {
    fn_038ce22c(object, a);
    *(unsigned*)(object + 0x0) = b;
    *(unsigned*)(object + 0x10) = c;
    *(unsigned*)(object + 0x1c) = d;
    *(unsigned*)(object + 0xc) = e;
    for (;;) {
        volatile unsigned* value = reinterpret_cast<volatile unsigned*>(object + 0x2c);
        unsigned old = __LWARX(value, 0);
        __DCBST(value, 0);
        if (store_conditional(value, old | 0x200))
            return;
    }
}
