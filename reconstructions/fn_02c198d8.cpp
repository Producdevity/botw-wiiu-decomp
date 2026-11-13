extern "C" void* fn_02c1962c(void* context);
extern "C" void* fn_02c198d8(void* context) {
    void* component = fn_02c1962c(context);
    if (component)
        return *reinterpret_cast<void**>(static_cast<char*>(component) + 56);
    return component;
}
