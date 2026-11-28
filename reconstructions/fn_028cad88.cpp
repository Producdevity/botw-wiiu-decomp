typedef unsigned int u32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void *, unsigned);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

namespace {
struct Object {
    char padding_0[0xEC];
    char member_EC[0x18];
    char member_104[0x5C];
    char member_160[0x18];
    char member_178[0x5C];
    char member_1D4[0x20];
    char member_1F4[0x20];
};
}

extern "C" void fn_028cad88(void *object, u32 flags) {
    if (object != 0) {
        fn_039883bc((DualInterfaceObject *)((Object *)object)->member_1F4, 2U);
        fn_039883bc((DualInterfaceObject *)((Object *)object)->member_1D4, 2U);
        if (((Object *)object)->member_160 != 0) {
            fn_039883bc((DualInterfaceObject *)((Object *)object)->member_178, 2U);
        }
        if (((Object *)object)->member_EC != 0) {
            fn_039883bc((DualInterfaceObject *)((Object *)object)->member_104, 2U);
        }
        fn_037b7d90(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
