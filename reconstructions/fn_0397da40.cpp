namespace {
struct VTable {
    char padding_0[0x8C];
    int (*check)(void*);
};

struct Fields {
    char padding_0[0x48];
    int state;
    char padding_4C[0x10];
    char member_5C[8];
    VTable* vtable;
    void* handle;
    char padding_6C[4];
    char flag;
};
}

extern "C" void fn_0308e6d4(void*);

extern "C" void fn_0397da40(void* object) {
    if (((Fields*)object)->vtable->check(((Fields*)object)->member_5C) != 0) {
        fn_0308e6d4(((Fields*)object)->handle);
        ((Fields*)object)->flag = 0;
    }
    ((Fields*)object)->state = 0;
}
