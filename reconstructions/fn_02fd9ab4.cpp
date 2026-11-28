extern "C" void fn_0308e6d0(void *);
extern "C" void fn_02e72c1c(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x44];
    char member[1];
};
}

extern "C" void fn_02fd9ab4(void *object, int flags) {
    if (object != 0) {
        fn_02e72c1c(((Object *) object)->member, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
