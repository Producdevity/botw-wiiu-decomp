struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10543b30;

extern "C" int fn_02fea240() {
    ((Action)data_10543b30.vtable[7])(&data_10543b30);
    return data_10543b30.value;
}
