#include "botw/teardown.h"
struct Owner_02b7d0e4 { unsigned char unknown_00[3056]; unsigned char registry[16]; };
struct Opaque_02b7d0e4 {
    Owner_02b7d0e4* owner;
    unsigned char unknown_04[16];
    unsigned char handle_14[16];
    unsigned char handle_24[12];
    unsigned char key[4];
};
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_03126cb0(void*, void*);
extern "C" void fn_02b7d0e4(Opaque_02b7d0e4* object, unsigned flags) {
    const unsigned release_flags = flags;
    __schedule_barrier();
    if (object) {
        fn_03126cb0(object->owner->registry, object->key);
        fn_0378da14(object->handle_24);
        fn_0378da14(object->handle_14);
        if (release_flags & 1) fn_0308e6d0(object);
    }
}
