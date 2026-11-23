struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105427ec;

extern "C" int fn_02fcd3a4() {
    ((Action)data_105427ec.vtable[7])(&data_105427ec);
    return data_105427ec.value;
}
