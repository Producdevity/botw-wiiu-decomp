extern "C" void* fn_02c1962c(void* context);
extern "C" void* fn_02c13674(void* context, int index);
extern "C" void* fn_02c1974c(void* context, int index) {
    void* component = fn_02c1962c(context);
    if (component)
        return fn_02c13674(component, index);
    return component;
}
