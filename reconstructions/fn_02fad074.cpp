struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10541a78;

extern "C" int fn_02fad074() {
    ((Action)data_10541a78.vtable[7])(&data_10541a78);
    return data_10541a78.value;
}
