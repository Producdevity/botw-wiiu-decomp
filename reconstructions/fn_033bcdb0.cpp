typedef int s32;

extern "C" int fn_033bccd8(void*, void*);
extern "C" void fn_033bcd9c(void*, void*);

namespace {
struct Target {
    char padding_0[0xE8];
    void* const* vtable;
};
}

extern "C" s32 fn_033bcdb0(void *object, void *context) {
    Target *target;

    target = (Target *)fn_033bccd8(object, context);
    if (target != 0) {
        ((s32 (*)())(target->vtable)[349])();
        fn_033bcd9c(object, context);
    }
    return 1;
}
