struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10542e18;

extern "C" int fn_02fd46ec() {
    ((Action)data_10542e18.vtable[7])(&data_10542e18);
    return data_10542e18.value;
}
