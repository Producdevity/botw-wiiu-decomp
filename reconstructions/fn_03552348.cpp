typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_035486b0(void *, unsigned);
extern "C" void fn_03be1738(void *);

extern "C" s32 data_102e1404;
extern "C" s32 data_102e1424;

namespace {
struct Object {
    s32 *vtable;
    s32 *secondaryVtable;
    char padding_8[0x124];
    s32 guard;
    char padding_130[0x90];
    void *resource;
};
}

extern "C" void fn_03552348(void *object, s32 flags) {
    if (object != 0) {
        void *resource = ((Object *)object)->resource;
        ((Object *)object)->vtable = &data_102e1404;
        ((Object *)object)->secondaryVtable = &data_102e1424;
        ((Object *)object)->guard = 0xDEADCA11;
        if (resource != 0) {
            fn_03be1738(resource);
            ((Object *)object)->resource = 0;
        }
        fn_035486b0((char *)object + 4, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
