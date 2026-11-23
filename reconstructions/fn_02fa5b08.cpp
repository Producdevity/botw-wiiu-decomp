struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10541438;

extern "C" int fn_02fa5b08() {
    ((Action)data_10541438.vtable[7])(&data_10541438);
    return data_10541438.value;
}
