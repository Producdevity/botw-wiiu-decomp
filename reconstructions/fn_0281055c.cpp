namespace {
struct Vtable {
    char padding_0[0x15C];
    int (*onReady)(void*);
};

struct Owner {
    void* handle;
    char padding_4[8];
    Vtable* vtable;
};
}

extern "C" void fn_0281b80c(void*);
extern "C" void fn_0344ba94(void*, const unsigned*);
extern "C" void* fn_037966a8(void*);

extern "C" void fn_0281055c(void* arg0) {
    unsigned int mode;
    fn_0281b80c(arg0);
    void* target = fn_037966a8(((Owner*)arg0)->handle);
    if (target != 0) {
        mode = 4;
        fn_0344ba94(target, &mode);
    }
    ((Owner*)arg0)->vtable->onReady(arg0);
}
