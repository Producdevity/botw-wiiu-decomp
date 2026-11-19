#include "botw/teardown.h"

extern "C" const unsigned char data_10364da0[];
extern "C" void fn_03a90c4c(void* object, unsigned flags);

extern "C" void fn_03a97c1c(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table = data_10364da0;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 28) = dispatch_table;
        fn_03a90c4c(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
