#include "botw/teardown.h"

extern "C" const unsigned char data_10357790[];
extern "C" void fn_039a43b0(void* object, unsigned flags);

extern "C" void fn_03a0fa50(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 28) = data_10357790;
        fn_039a43b0(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
