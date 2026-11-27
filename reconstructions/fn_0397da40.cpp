namespace {
struct VTable {
    char padding_0[0x8C];
    int (*check)(void*);
};

struct Object {
    char padding_0[0x48];
    int state;
    char padding_4C[0x18];
    VTable* vtable;
    void* handle;
    char padding_6C[4];
    char flag;
};
}

extern "C" void fn_0308e6d4(void*);

extern "C" void fn_0397da40(void* arg0) {
    if (((Object*)arg0)->vtable->check((char*)arg0 + 0x5C) != 0) {
        fn_0308e6d4(((Object*)arg0)->handle);
        ((Object*)arg0)->flag = 0;
    }
    ((Object*)arg0)->state = 0;
}
