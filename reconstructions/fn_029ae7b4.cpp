extern "C" void fn_0308e6d0(void *);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

namespace {
struct Object {
    char padding_0[0x24];
    char block_24[1];
};
}

extern "C" void fn_029ae7b4(void *object, int flags) {
    if (object != 0) {
        fn_039883bc((DualInterfaceObject *)((Object *)object)->block_24, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
