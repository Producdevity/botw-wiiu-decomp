extern "C" void* fn_02c1962c(void* context);
extern "C" int fn_02c13344(void* context);
extern "C" int fn_02c197d4(void* context) {
    void* component = fn_02c1962c(context);
    if (component)
        return fn_02c13344(component);
    return 0;
}
