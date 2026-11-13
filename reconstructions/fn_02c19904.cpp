extern "C" void* fn_02c1962c(void* context);
extern "C" void* fn_02c1363c(void* context, int index);
extern "C" void* fn_02c19904(void* context, int index) {
    void* component = fn_02c1962c(context);
    if (component)
        return fn_02c1363c(component, index);
    return component;
}
