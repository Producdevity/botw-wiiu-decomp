namespace {
struct Fn0249caf4Self {
    void* first;
    void* second;
};
}

extern "C" void fn_02e18c7c(void*, void*, void*);
extern "C" void fn_02e18cdc(void*, void*, void*);

extern "C" void fn_0249caf4(void* object, void* value) {
    Fn0249caf4Self* pair = (Fn0249caf4Self*)object;
    fn_02e18c7c(pair->first, value, 0);
    fn_02e18cdc(pair->second, value, 0);
}
