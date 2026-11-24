struct Opaque_0378c87c {
    void* target;
};

extern "C" void fn_0378c874(void* target);

extern "C" void fn_0378c87c(Opaque_0378c87c* handle) {
    if (handle->target)
        fn_0378c874(handle->target);
}
