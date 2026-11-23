extern "C" void* fn_0294f338(void* owner);
extern "C" void fn_0249901c(void* entry, void* value);
extern "C" void fn_0294e288(void* owner);

extern "C" void fn_025ca3dc(void** object) {
    void* entry = fn_0294f338(*object);
    if (entry != 0) {
        fn_0249901c(entry, (void*)8);
    }
    fn_0294e288(*object);
}
