struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105407f0;

extern "C" int fn_02f99edc() {
    ((Action)data_105407f0.vtable[7])(&data_105407f0);
    return data_105407f0.value;
}
