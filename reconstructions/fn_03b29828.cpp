#include "botw/teardown.h"

extern "C" const unsigned char data_10373efc[];
extern "C" void fn_03b29504(void* object, unsigned flags);

extern "C" void fn_03b29828(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        *reinterpret_cast<const unsigned char**>(
            static_cast<unsigned char*>(object) + 28) = data_10373efc;
        fn_03b29504(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
