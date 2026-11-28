extern "C" void* fn_02c196bc(void* context);
extern "C" void* fn_02c13360(void* context, int index);
extern "C" void* fn_02c1b484(void* context, int index) {
    void* component = fn_02c196bc(context);
    if (component)
        return fn_02c13360(component, index);
    return component;
}
