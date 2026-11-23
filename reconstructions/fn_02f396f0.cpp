struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10531270;

extern "C" int fn_02f396f0() {
    ((Action)data_10531270.vtable[7])(&data_10531270);
    return data_10531270.value;
}
