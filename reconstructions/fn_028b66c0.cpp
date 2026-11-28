typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void *, unsigned);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

namespace {
struct Object {
    unsigned char padding_0[0x6C];
    unsigned char dual_interface[1];
};
}

extern "C" void fn_028b66c0(void *object, s32 flags) {
    if (object != 0) {
        fn_039883bc((DualInterfaceObject *) ((Object *) object)->dual_interface, 2U);
        fn_037b7d90(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
