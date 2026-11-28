extern "C" int fn_0294fbc0(void);
extern "C" int fn_0249eb80(void* context);
extern "C" int fn_0294fd7c(void* context) {
    void* component = (void*)fn_0294fbc0();
    if (component)
        return fn_0249eb80(component);
    return 0;
}
