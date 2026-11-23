struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_1054384c;

extern "C" int fn_02fe46b0() {
    ((Action)data_1054384c.vtable[7])(&data_1054384c);
    return data_1054384c.value;
}
