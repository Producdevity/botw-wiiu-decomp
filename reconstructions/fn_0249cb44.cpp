namespace {
struct Fn0249cb44Self {
    void* first;
    void* second;
};
}

extern "C" void fn_02e18bec(void*, void*, void*);
extern "C" void fn_02e18c4c(void*, void*, void*);

extern "C" void fn_0249cb44(void* object, void* value) {
    Fn0249cb44Self* pair = (Fn0249cb44Self*)object;
    fn_02e18bec(pair->first, value, 0);
    fn_02e18c4c(pair->second, value, 0);
}
