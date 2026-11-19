#include "botw/teardown.h"

extern "C" const unsigned char data_10334dd8[];
extern "C" void fn_035486b0(void* object, unsigned flags);

extern "C" void fn_038eb5b0(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table = data_10334dd8;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 12) = dispatch_table;
        fn_035486b0(static_cast<unsigned char*>(object) + 12, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
