extern "C" void* fn_02c1b18c();
extern "C" int fn_02c11f58(void* context);
extern "C" int fn_02c1b788(void* context) {
    void* component = fn_02c1b18c();
    if (component)
        return fn_02c11f58(component);
    return 0;
}
