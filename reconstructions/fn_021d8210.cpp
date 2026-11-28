typedef int s32;

extern "C" int fn_0359baa8(void*, void*, void*);
extern "C" void fn_03713120(void*, int, int, int, void*);

extern "C" s32 data_100480f0;

namespace {
struct Inner {
    unsigned char padding_0[0x394];
    void *target;
};

struct Object {
    Inner *inner;
    unsigned char padding_4[8];
    void *const *vtable;
};
}

extern "C" void fn_021d8210(void *object) {
    void *const *vtable1;
    void *const *vtable2;
    void *target;

    fn_0359baa8(((Object *)object)->inner, &data_100480f0, 0);
    target = ((Object *)object)->inner->target;
    if (target != 0) {
        fn_03713120(target, 0x42, 0x11, 0, 0);
    }
    ((s32 (*)(void *))(vtable1 = ((Object *)object)->vtable)[71])(object);
    ((s32 (*)(void *))(vtable2 = ((Object *)object)->vtable)[73])(object);
}
