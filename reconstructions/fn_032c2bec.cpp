extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037e6024(void *, unsigned);

namespace {
struct Object {
    char padding_0[0x18];
    char member[1];
};
}

extern "C" void fn_032c2bec(void *object, int flags) {
    if (object != 0) {
        fn_037e6024(((Object *) object)->member, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
