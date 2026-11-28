namespace {
struct Pair {
    void* first;
    void* second;
};
}

extern "C" void fn_02e1a728(void*, void*, void*);
extern "C" void fn_02e1a758(void*, void*, void*);

extern "C" void fn_0249c934(void* object, void* value) {
    Pair* pair = (Pair*)object;
    fn_02e1a728(pair->first, value, 0);
    fn_02e1a758(pair->second, value, 0);
}
