namespace {
struct Fn0249c984Self {
    void* first;
    void* second;
};
}

extern "C" void fn_02e1a638(void*, void*, void*);
extern "C" void fn_02e1a668(void*, void*, void*);

extern "C" void fn_0249c984(void* object, void* value) {
    Fn0249c984Self* pair = (Fn0249c984Self*)object;
    fn_02e1a638(pair->first, value, 0);
    fn_02e1a668(pair->second, value, 0);
}
