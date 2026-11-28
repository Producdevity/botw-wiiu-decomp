extern "C" int fn_0294fbc0(void);
extern "C" int fn_0249ea00(void* context);
extern "C" int fn_0294fc84(void* context) {
    void* component = (void*)fn_0294fbc0();
    if (component)
        return fn_0249ea00(component);
    return 0;
}
