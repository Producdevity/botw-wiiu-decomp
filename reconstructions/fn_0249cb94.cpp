namespace {
struct Fn0249cb94Self {
    void* first;
    void* second;
};
}

extern "C" void fn_02e18b5c(void*, void*, void*);
extern "C" void fn_02e18bbc(void*, void*, void*);

extern "C" void fn_0249cb94(void* object, void* value) {
    Fn0249cb94Self* pair = (Fn0249cb94Self*)object;
    fn_02e18b5c(pair->first, value, 0);
    fn_02e18bbc(pair->second, value, 0);
}
