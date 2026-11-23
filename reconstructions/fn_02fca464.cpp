struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10542598;

extern "C" int fn_02fca464() {
    ((Action)data_10542598.vtable[7])(&data_10542598);
    return data_10542598.value;
}
