struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10542cb4;

extern "C" int fn_02fd2ff0() {
    ((Action)data_10542cb4.vtable[7])(&data_10542cb4);
    return data_10542cb4.value;
}
