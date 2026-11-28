extern "C" void* fn_03839680(void* context);
extern "C" int fn_03986a50(void* context);
extern "C" int fn_0383974c(void* context) {
    void* component = fn_03839680(context);
    if (component)
        return fn_03986a50(component);
    return 0;
}
