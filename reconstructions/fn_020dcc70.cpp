#include "botw/teardown.h"

extern "C" const unsigned char data_1001ba3c[];
extern "C" void fn_0327fc84(void* object, unsigned flags);

extern "C" void fn_020dcc70(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 24) = data_1001ba3c;
        fn_0327fc84(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
