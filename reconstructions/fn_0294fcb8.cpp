extern "C" int fn_0294fbc0(void);
extern "C" int fn_0249ea78(void* context);
extern "C" int fn_0294fcb8(void* context) {
    void* component = (void*)fn_0294fbc0();
    if (component)
        return fn_0249ea78(component);
    return 0;
}
