typedef int s32;

extern "C" void fn_027b8364(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037988ac(void *, void *);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);

extern "C" s32 data_1012d120;

namespace {
struct Object {
    void *owner;
    char padding_4[8];
    s32 *vtable;
    char padding_10[0x198];
    char member[1];
};
}

extern "C" void fn_0278ba5c(void *object, s32 flags) {
    if (object != 0) {
        void *member = ((Object *)object)->member;
        ((Object *)object)->vtable = &data_1012d120;
        fn_037988ac(((Object *)object)->owner, member);
        if (member != 0) {
            fn_039883bc((DualInterfaceObject *)((char *)member + 0x18), 2U);
        }
        fn_027b8364(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
