extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

namespace {
struct Object {
    char padding_0[4];
    char member_4[1];
    char padding_5[0x14 - 5];
    char link[1];
};
}

extern "C" void fn_021a043c(void *object, int flags) {
    if (object != 0) {
        fn_0378c734(reinterpret_cast<ProcLink *>(static_cast<Object *>(object)->link));
        fn_030eb73c(static_cast<Object *>(object)->member_4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
