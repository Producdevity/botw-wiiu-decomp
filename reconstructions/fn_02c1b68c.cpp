extern "C" void* fn_02c1b18c();
extern "C" int fn_02c11f14(void* context);
extern "C" int fn_02c1b68c(void* context) {
    void* component = fn_02c1b18c();
    if (component)
        return fn_02c11f14(component);
    return 0;
}
