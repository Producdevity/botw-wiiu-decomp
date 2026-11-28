typedef int s32;

extern "C" void fn_03bc2b84(void*);
extern "C" void fn_03bc2d28(void*);
extern "C" void fn_03bc2f14(void*);

namespace {
struct Object {
    char padding_0[0x24];
    s32 value;
};
}

extern "C" void fn_03bc2fa0(void *object) {
    if (((Object *) object)->value != 0) {
        fn_03bc2b84(object);
        fn_03bc2d28(object);
        fn_03bc2f14(object);
    }
}
