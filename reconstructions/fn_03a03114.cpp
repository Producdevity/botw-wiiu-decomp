#include "botw/teardown.h"

extern "C" const unsigned char data_1035626c[];
extern "C" void fn_039a43b0(void* object, unsigned flags);

extern "C" void fn_03a03114(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 28) = data_1035626c;
        fn_039a43b0(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
