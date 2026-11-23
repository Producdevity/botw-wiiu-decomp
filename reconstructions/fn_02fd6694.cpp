struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105430ec;

extern "C" int fn_02fd6694() {
    ((Action)data_105430ec.vtable[7])(&data_105430ec);
    return data_105430ec.value;
}
