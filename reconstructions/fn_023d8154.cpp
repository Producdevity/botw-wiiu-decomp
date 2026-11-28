typedef int s32;

extern "C" void fn_023d6b38(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

namespace {
struct Object {
    unsigned char padding_0[0x90];
    unsigned char member_90[1];
};
}

extern "C" void fn_023d8154(void *object, s32 flags) {
    if (object != 0) {
        fn_0378c734((ProcLink *) ((Object *) object)->member_90);
        fn_023d6b38(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
