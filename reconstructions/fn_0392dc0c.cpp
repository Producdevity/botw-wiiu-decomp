#include "botw/teardown.h"

extern "C" void fn_039323e0(void*, int);

extern "C" void fn_0392dc0c(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    __schedule_barrier();
    if (object) {
        if (unsigned char* receiver = static_cast<unsigned char*>(object))
            fn_039323e0(receiver + 40, 2);
        if (release_flags & 1)
            fn_0308e6d0(object);
    }
}
