typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_031268bc(void*, void*);

namespace {
struct Object {
    char padding_0[0xC];
    s32 value;
};
}

extern "C" void fn_03126a1c(void *object, s32 flags) {
    if (object != 0) {
        ((Object *) object)->value = 0;
        fn_031268bc(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
