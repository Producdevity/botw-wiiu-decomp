namespace {
struct Pair {
    void* first;
    void* second;
};
}

extern "C" void fn_02e1a728(void*, void*, void*);
extern "C" void fn_02e1a758(void*, void*, void*);

extern "C" void fn_0249c934(void* arg0, void* arg1) {
    Pair* pair = (Pair*)arg0;
    fn_02e1a728(pair->first, arg1, 0);
    fn_02e1a758(pair->second, arg1, 0);
}
