typedef int s32;

extern "C" void fn_0226c824(void*, void*);
extern "C" void fn_0308e6d0(void *);

extern "C" s32 data_10009d0c;

namespace {
struct Layout {
    char padding_0[0x10];
    s32 *vtable;
};
}

extern "C" void fn_02277e30(void *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_10009d0c;
        fn_0226c824(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
