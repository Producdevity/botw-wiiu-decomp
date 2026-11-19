#include "botw/teardown.h"

extern "C" const unsigned char data_10354de4[];
extern "C" void fn_02c338f8(void* object, unsigned flags);

extern "C" void fn_039f67d4(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table = data_10354de4;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 28) = dispatch_table;
        fn_02c338f8(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
