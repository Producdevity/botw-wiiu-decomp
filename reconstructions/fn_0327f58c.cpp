#include "botw/teardown.h"

extern "C" const unsigned char data_1029ed5c[];
extern "C" void fn_0327fc84(void* object, unsigned flags);

extern "C" void fn_0327f58c(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        const unsigned char* const dispatch_table = data_1029ed5c;
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 24) = dispatch_table;
        fn_0327fc84(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
