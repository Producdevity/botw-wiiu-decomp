typedef int s32;

extern "C" void fn_0370ea1c(void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1008db20;

namespace {
struct Owner {
    char padding_0[0x394];
    void *handle;
};
}

extern "C" void fn_02357d14(void **object) {
    struct { const void* first; const void* second; } args;
    void *handle;

    handle = ((Owner *)*object)->handle;
    if (handle != 0) {
        args.second = &data_10263910;
        args.first = &data_1008db20;
        fn_0370ea1c(handle, &args.first);
    }
}
