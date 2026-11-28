typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

namespace {
struct Object {
    unsigned char padding_0[4];
    unsigned char member_4[0x24];
    unsigned char member_28[1];
};
}

extern "C" void fn_023b0ebc(void *object, s32 flags) {
    if (object != 0) {
        fn_0378c734((ProcLink *) ((Object *) object)->member_28);
        fn_030eb73c(((Object *) object)->member_4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
