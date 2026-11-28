typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

extern "C" s32 data_10009d0c;

namespace {
struct Layout {
    char padding_0[0x10];
    s32 *vtable;
};
}

extern "C" void fn_0226c824(void *object, void *flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_10009d0c;
        fn_030eb73c((char *)object + 4, 2U);
        if ((s32) flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
