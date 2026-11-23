struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10549fec;

extern "C" int fn_03604bc8() {
    ((Action)data_10549fec.vtable[7])(&data_10549fec);
    return data_10549fec.value;
}
