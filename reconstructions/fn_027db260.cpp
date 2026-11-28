typedef unsigned char u8;

extern "C" void fn_025a1ed0(void*, void*);
extern "C" void fn_027db084(void *);

namespace {
struct Object {
    char padding_0[0x3C];
    u8 *flag;
};
}

extern "C" void fn_027db260(void *object, void *other) {
    if (*((Object *) object)->flag != 0) {
        fn_027db084(object);
    }
    fn_025a1ed0(object, other);
}
