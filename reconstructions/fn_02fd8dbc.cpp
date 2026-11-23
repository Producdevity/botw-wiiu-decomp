struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105433d8;

extern "C" int fn_02fd8dbc() {
    ((Action)data_105433d8.vtable[7])(&data_105433d8);
    return data_105433d8.value;
}
