extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0333bcec(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x3C];
    char member[1];
};
}

extern "C" void fn_03364cf0(void *object, int flags) {
    if (object != 0) {
        fn_0333bcec(((Object *) object)->member, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
