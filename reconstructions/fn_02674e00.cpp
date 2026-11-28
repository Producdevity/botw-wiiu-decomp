extern "C" int fn_02674b2c(void*);
extern "C" void* fn_020411fc(void* context, int index);
extern "C" void* fn_02674e00(void* context, int index) {
    void* component = (void*)fn_02674b2c(context);
    if (component)
        return fn_020411fc(component, index);
    return component;
}
