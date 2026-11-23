struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105422e8;

extern "C" int fn_02fbd6bc() {
    ((Action)data_105422e8.vtable[7])(&data_105422e8);
    return data_105422e8.value;
}
