#include "botw/teardown.h"

extern "C" const unsigned char data_101c2ffc[];
extern "C" void fn_039a43b0(void* object, unsigned flags);

extern "C" void fn_02c33898(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 28) = data_101c2ffc;
        fn_039a43b0(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
