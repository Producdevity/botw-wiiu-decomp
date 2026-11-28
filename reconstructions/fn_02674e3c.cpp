extern "C" int fn_02674b2c(void*);
extern "C" void* fn_0204136c(void* context, int index);
extern "C" void* fn_02674e3c(void* context, void* index) {
    void* component = (void*)fn_02674b2c(context);
    if (component)
        return fn_0204136c(component, (int)index);
    return component;
}
