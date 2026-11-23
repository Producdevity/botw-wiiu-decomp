struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105436dc;

extern "C" int fn_02fdfa00() {
    ((Action)data_105436dc.vtable[7])(&data_105436dc);
    return data_105436dc.value;
}
