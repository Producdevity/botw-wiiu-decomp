extern "C" void* fn_02c1b18c();
extern "C" void* fn_02c11ffc(void*, int);
extern "C" void* fn_02c1b74c(void* context, int index) {
    void* component = fn_02c1b18c();
    if (component)
        return fn_02c11ffc(component, index);
    return component;
}
