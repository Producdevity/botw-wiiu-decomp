struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105445ac;

extern "C" int fn_02ffde54() {
    ((Action)data_105445ac.vtable[7])(&data_105445ac);
    return data_105445ac.value;
}
