struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10545fbc;

extern "C" int fn_030204a0() {
    ((Action)data_10545fbc.vtable[7])(&data_10545fbc);
    return data_10545fbc.value;
}
