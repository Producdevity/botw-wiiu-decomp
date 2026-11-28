struct Opaque_030d2488 {
    void* target;
};

extern "C" void fn_030d5274(void* target);

extern "C" void fn_030d2488(Opaque_030d2488* handle) {
    if (handle->target)
        fn_030d5274(handle->target);
}
