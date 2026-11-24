#include "botw/teardown.h"
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_030eb73c(void* object, unsigned flags);
struct Prefix_02247144 { unsigned char bytes[52]; };
struct Tail_02247144 { unsigned char unknown_00[24]; unsigned char handle[12]; };
struct Opaque_02247144 : Prefix_02247144, Tail_02247144 {};
static inline void destroy_02247144(Opaque_02247144* object, unsigned flags) {
    if (object) {
        Tail_02247144& tail = *object;
        if (&tail)
            fn_0378da14(object->handle);
        fn_030eb73c(reinterpret_cast<unsigned char*>(object) + 4, 2);
        if (flags & 1) fn_0308e6d0(object);
    }
}

extern "C" void fn_02247144(void* object, unsigned flags) {
    destroy_02247144(static_cast<Opaque_02247144*>(object), flags);
}
