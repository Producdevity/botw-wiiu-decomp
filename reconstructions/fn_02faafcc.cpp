struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10541a50;

extern "C" int fn_02faafcc() {
    ((Action)data_10541a50.vtable[7])(&data_10541a50);
    return data_10541a50.value;
}
