struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10541590;

extern "C" int fn_02fa6e40() {
    ((Action)data_10541590.vtable[7])(&data_10541590);
    return data_10541590.value;
}
