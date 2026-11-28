typedef int s32;
typedef unsigned int u32;

extern "C" void fn_028fed24(void*, void*);

namespace {
struct Message {
    void *const *vtable;
};
}

extern "C" s32 fn_028ff290(void *object, void **message) {
    void *const *vtable;
    if (*((u32 *(*)(void **))(vtable = ((Message *)message)->vtable)[9])(message) == 0x03000003U) {
        fn_028fed24(object, 0);
    }
    return 0;
}
