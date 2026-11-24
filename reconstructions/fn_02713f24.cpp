#include "botw/teardown.h"

extern "C" void fn_0378da14(void* handle);

extern "C" void fn_02713f24(void* object, unsigned flags) {
    const unsigned release_flags = flags;
    __schedule_barrier();
    if (object) {
        if (unsigned char* receiver = static_cast<unsigned char*>(object))
            fn_0378da14(receiver + 4);
        if (release_flags & 1)
            fn_0308e6d0(object);
    }
}

