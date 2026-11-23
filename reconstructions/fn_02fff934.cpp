struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10544724;

extern "C" int fn_02fff934() {
    ((Action)data_10544724.vtable[7])(&data_10544724);
    return data_10544724.value;
}
