namespace {
struct Handle {
    void* target;
};
}

extern "C" void fn_0378c874(void* target);

extern "C" void fn_0378c87c(Handle* handle) {
    if (handle->target)
        fn_0378c874(handle->target);
}
