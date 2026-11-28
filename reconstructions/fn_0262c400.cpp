typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void *, unsigned);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

namespace {
struct Object {
    char padding_1E0[0x1E0];
    char dual_interface;
};
}

extern "C" void fn_0262c400(void *object, s32 flags) {
    if (object != 0) {
        fn_039883bc((DualInterfaceObject *) &((Object *) object)->dual_interface, 2U);
        fn_037b7d90(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
