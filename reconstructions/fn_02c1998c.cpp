extern "C" void* fn_02c1962c(void* context);
extern "C" int fn_02c13328(void* context);
extern "C" int fn_02c1998c(void* context) {
    void* component = fn_02c1962c(context);
    if (component)
        return fn_02c13328(component);
    return 0;
}
