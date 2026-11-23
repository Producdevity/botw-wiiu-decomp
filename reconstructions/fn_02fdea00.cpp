struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10543588;

extern "C" int fn_02fdea00() {
    ((Action)data_10543588.vtable[7])(&data_10543588);
    return data_10543588.value;
}
