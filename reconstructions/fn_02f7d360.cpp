struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_1053f3dc;

extern "C" int fn_02f7d360() {
    ((Action)data_1053f3dc.vtable[7])(&data_1053f3dc);
    return data_1053f3dc.value;
}
