#include "botw/atomic.h"

extern "C" int fn_037fbff0();
extern "C" void fn_037f5f70(unsigned* object) {
    unsigned flags = object[2];
    flags >>= 19;
    flags &= 1u;
    if ((flags ^ 1u) == 0) {
        unsigned* result = reinterpret_cast<unsigned*>(
            fn_037f5f54(reinterpret_cast<unsigned char*>(object)));
        result[2] &= ~(1u << 19);
        fn_037fbff0();
    }
}
