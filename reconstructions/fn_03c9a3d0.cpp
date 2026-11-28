typedef int s32;

extern "C" void fn_03c96764(void*, void*);
extern "C" void fn_03c98df4(void *);
extern "C" void fn_0434bda8(void*, void*);

namespace {
struct Object {
    char padding_0[4];
    void *child;
};
}

extern "C" s32 fn_03c9a3d0(void *object, void *context) {
    void *child;

    child = ((Object *)object)->child;
    if (child != 0) {
        fn_03c96764(child, context);
        fn_0434bda8(context, ((Object *)object)->child);
    }
    fn_03c98df4(object);
    return 0;
}
