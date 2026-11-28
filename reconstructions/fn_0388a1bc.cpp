typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct Object;
extern "C" void fn_037e58bc(Object *, unsigned);

extern "C" s32 data_1032d518;

namespace {
struct Layout {
    char padding_0[0x18];
    s32 *vtable;
};
}

extern "C" void fn_0388a1bc(struct Object *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_1032d518;
        fn_037e58bc(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
