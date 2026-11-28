typedef int s32;

extern "C" void fn_03c92f98(void*);
extern "C" void fn_03cc6cec(void*);
extern "C" void fn_0434bda8(void*, void*);

namespace {
struct Object {
    char padding_0[4];
    void *owner;
    char padding_8[0x2C];
    void *handle;
};
}

extern "C" s32 fn_03cc71fc(void *object) {
    void *handle;

    handle = ((Object *)object)->handle;
    if (handle != 0) {
        fn_0434bda8(((Object *)object)->owner, handle);
    }
    fn_03c92f98(object);
    fn_03cc6cec(object);
    return 0;
}
