typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_039794d0(void *, int);
extern "C" void fn_039abaf8(void*, void*);
extern "C" void fn_03ae44f4(void *, int);

extern "C" s32 data_10348614;
extern "C" s32 data_103486d4;

namespace {
struct Object {
    char padding_0[0xC];
    s32 *vtable;
    s32 *secondaryVtable;
    char padding_14[0xB70];
    void *resource;
    char member[1];
};
}

extern "C" void fn_0397a7cc(void *object, s32 flags) {
    if (object != 0) {
        void *resource = ((Object *)object)->resource;
        ((Object *)object)->vtable = &data_10348614;
        ((Object *)object)->secondaryVtable = &data_103486d4;
        if (resource != 0) {
            fn_039abaf8(resource, object);
            ((Object *)object)->resource = 0;
        }
        fn_03ae44f4(((Object *)object)->member, 2);
        fn_039794d0(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
