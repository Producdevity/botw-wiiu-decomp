#include "botw/teardown.h"

extern "C" const unsigned char data_10349ba4[];
extern "C" void fn_03982ed0(void* object, unsigned flags);

extern "C" void fn_039822c0(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 28) = data_10349ba4;
        fn_03982ed0(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
