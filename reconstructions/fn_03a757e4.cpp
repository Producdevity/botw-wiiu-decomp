typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a7579c(unsigned *);

extern "C" s32 data_103624d4;

namespace {
struct Layout {
    char padding_0[0x1C];
    s32 *vtable;
};
}

extern "C" void fn_03a757e4(u32 *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_103624d4;
        fn_03a7579c(object);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
