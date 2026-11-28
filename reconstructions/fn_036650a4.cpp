typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03670f78(void*, void*);

extern "C" s32 data_1030227c;

namespace {
struct Layout {
    char padding_0[0xC];
    s32 *vtable;
};
}

extern "C" void fn_036650a4(void *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_1030227c;
        fn_03670f78(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
