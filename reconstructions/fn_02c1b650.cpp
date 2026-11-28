extern "C" void* fn_02c1b18c();
extern "C" void* fn_02c11fd4(void* context, int index);
extern "C" void* fn_02c1b650(void* context, int index) {
    void* component = fn_02c1b18c();
    if (component)
        return fn_02c11fd4(component, index);
    return component;
}
