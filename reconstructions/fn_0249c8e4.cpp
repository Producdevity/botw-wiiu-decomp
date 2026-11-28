namespace {
struct Fn0249c8e4Self {
    void* first;
    void* second;
};
}

extern "C" void fn_02e1a788(void*, void*, void*);
extern "C" void fn_02e1a7b8(void*, void*, void*);

extern "C" void fn_0249c8e4(void* object, void* value) {
    Fn0249c8e4Self* pair = (Fn0249c8e4Self*)object;
    fn_02e1a788(pair->first, value, 0);
    fn_02e1a7b8(pair->second, value, 0);
}
