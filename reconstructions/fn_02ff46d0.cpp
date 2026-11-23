struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10543dec;

extern "C" int fn_02ff46d0() {
    ((Action)data_10543dec.vtable[7])(&data_10543dec);
    return data_10543dec.value;
}
