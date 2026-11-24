#include "botw/teardown.h"
extern "C" void fn_0378da14(void* handle);
struct Prefix_0283ec28 { unsigned char bytes[16]; };
struct Tail_0283ec28 { unsigned char unknown_00[4]; unsigned char handle_a[12]; unsigned char handle_b[12]; };
struct Opaque_0283ec28 : Prefix_0283ec28, Tail_0283ec28 {};
extern "C" void fn_0283ec28(Opaque_0283ec28* object, unsigned flags) {
    if (object) {
        Tail_0283ec28& tail = *object;
        if (&tail) {
            fn_0378da14(object->handle_b);
            fn_0378da14(object->handle_a);
        }
        if (flags & 1) fn_0308e6d0(object);
    }
}
