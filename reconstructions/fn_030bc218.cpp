typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bbd6c(void*, void*);

extern "C" s32 data_1027ad2c;

namespace {
struct Layout {
    char padding_0[0x18];
    s32 *vtable;
};
}

extern "C" void fn_030bc218(void *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_1027ad2c;
        fn_030bbd6c(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
