extern "C" void* fn_02c196bc(void* context);
extern "C" void* fn_02c133f0(void* context, int index);
extern "C" void* fn_02c1b4c0(void* context, int index) {
    void* component = fn_02c196bc(context);
    if (component)
        return fn_02c133f0(component, index);
    return component;
}
