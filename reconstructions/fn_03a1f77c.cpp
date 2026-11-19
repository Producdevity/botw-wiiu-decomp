#include "botw/teardown.h"

extern "C" const unsigned char data_1035a9d8[];
extern "C" void fn_03a90c4c(void* object, unsigned flags);

extern "C" void fn_03a1f77c(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 28) = data_1035a9d8;
        fn_03a90c4c(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
