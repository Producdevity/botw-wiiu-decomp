extern "C" void fn_0317f700(void*, int);

namespace {
struct Target {
    char padding_0[0x38C];
    void *handle;
};
struct Holder {
    Target *target;
};
}

extern "C" void fn_026e08c4(void **object) {
    void *handle;

    handle = ((Holder *)object)->target->handle;
    if (handle != 0) {
        fn_0317f700(handle, 1);
        fn_0317f700(handle, 0);
    }
}
