typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct Object;
extern "C" void fn_03a8490c(Object *);

extern "C" s32 data_10362b50;

namespace {
struct Layout {
    char padding_0[0x158];
    s32 *vtable;
};
}

extern "C" void fn_03a84994(struct Object *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_10362b50;
        fn_03a8490c(object);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
