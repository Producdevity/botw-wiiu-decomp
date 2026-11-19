#include "botw/teardown.h"

extern "C" const unsigned char data_10047630[];
extern "C" void fn_0327f58c(void* object, unsigned flags);

extern "C" void fn_021d6224(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 24) = data_10047630;
        fn_0327f58c(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
