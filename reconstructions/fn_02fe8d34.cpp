struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105439d0;

extern "C" int fn_02fe8d34() {
    ((Action)data_105439d0.vtable[7])(&data_105439d0);
    return data_105439d0.value;
}
