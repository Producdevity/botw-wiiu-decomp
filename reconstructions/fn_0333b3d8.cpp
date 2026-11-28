extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb79c(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x24];
    char member[1];
};
}

extern "C" void fn_0333b3d8(void *object, int flags) {
    if (object != 0) {
        fn_030bb79c(((Object *) object)->member, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
