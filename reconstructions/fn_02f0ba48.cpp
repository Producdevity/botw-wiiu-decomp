extern "C" void fn_0308e6d0(void *);
extern "C" void fn_02ecfbdc(void *, unsigned);

namespace {
struct Object {
    char padding_0[0xC];
    char member[1];
};
}

extern "C" void fn_02f0ba48(void *object, int flags) {
    if (object != 0) {
        fn_02ecfbdc(((Object *) object)->member, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
