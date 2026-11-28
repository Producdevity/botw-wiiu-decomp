extern "C" void* fn_02c1b18c();
extern "C" int fn_02c11f9c(void* context);
extern "C" int fn_02c1b418(void* context) {
    void* component = fn_02c1b18c();
    if (component)
        return fn_02c11f9c(component);
    return 0;
}
