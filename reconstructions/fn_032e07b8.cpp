namespace {
struct Context {
    char padding_0[0x394];
    void* field_394;
};

struct Object {
    char padding_0[4];
    Context* context;
    char sub[0xEC];
    int first;
    int second;
};
}

extern "C" void fn_032e0620(void*);
extern "C" void fn_032f9348(void*, void*);

extern "C" int fn_032e07b8(void* arg0, void* arg1) {
    ((Object*)arg0)->context = (Context*)arg1;
    fn_032f9348(((Object*)arg0)->sub, ((Context*)arg1)->field_394);
    int* first = &((Object*)arg0)->first;
    int* second = &((Object*)arg0)->second;
    *second = 0;
    *first = 0;
    fn_032e0620(arg0);
    return 1;
}
