typedef int s32;

extern "C" int fn_033bccd8(void*, void*);
extern "C" void fn_033bcd9c(void*, void*);

namespace {
struct Target {
    char padding_0[0xE8];
    void* const* vtable;
};
}

extern "C" s32 fn_033bcdb0(void *object, void *arg1) {
    Target *target;

    target = (Target *)fn_033bccd8(object, arg1);
    if (target != 0) {
        ((s32 (*)())(target->vtable)[349])();
        fn_033bcd9c(object, arg1);
    }
    return 1;
}
