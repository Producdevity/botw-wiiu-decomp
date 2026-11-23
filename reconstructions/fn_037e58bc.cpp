#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_030b7184(void* object, unsigned flags);
extern "C" const unsigned char data_1031ef28[];

struct Object {
    unsigned char unknown_00[24];
    const void* vtable;
};

extern "C" void fn_037e58bc(Object* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        object->vtable = data_1031ef28;
        fn_030b7184(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
