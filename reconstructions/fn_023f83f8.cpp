extern "C" void fn_03072588();
extern "C" void fn_030725e8(int);
extern "C" void fn_030727cc();
extern "C" void fn_030ea2cc(void *);

namespace {
struct Object {
    char padding_0[0x10];
    unsigned char initialized;
};
}

extern "C" void fn_023f83f8(void* object) {
    if (((Object *) object)->initialized != 0) {
        fn_03072588();
        fn_030727cc();
        fn_030ea2cc(object);
        return;
    }
    fn_030725e8(1);
    ((Object *) object)->initialized = 1;
}
