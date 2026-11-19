#include "botw/teardown.h"

extern "C" const unsigned char data_10372ea4[];
extern "C" void fn_03b296fc(void* object, unsigned flags);

extern "C" void fn_03b30274(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table = data_10372ea4;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 28) = dispatch_table;
        fn_03b296fc(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
