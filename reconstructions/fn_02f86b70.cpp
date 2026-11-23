struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_1053f9fc;

extern "C" int fn_02f86b70() {
    ((Action)data_1053f9fc.vtable[7])(&data_1053f9fc);
    return data_1053f9fc.value;
}
