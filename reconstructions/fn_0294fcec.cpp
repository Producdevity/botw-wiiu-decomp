extern "C" int fn_0294fbc0(void);
extern "C" int fn_0249f2d0(void* context);
extern "C" int fn_0294fcec(int context, int other) {
    void* component = (void*)fn_0294fbc0();
    if (component)
        return fn_0249f2d0(component);
    return 0;
}
