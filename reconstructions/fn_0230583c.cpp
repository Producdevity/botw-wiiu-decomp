#include "botw/teardown.h"

extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_0230583c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    __schedule_barrier();
    if (object) {
        if (unsigned char* receiver = static_cast<unsigned char*>(object))
            fn_030eb73c(receiver + 4, 2);
        if (release_flags & 1)
            fn_0308e6d0(object);
    }
}
