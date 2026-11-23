struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105459b4;

extern "C" int fn_03018b28() {
    ((Action)data_105459b4.vtable[7])(&data_105459b4);
    return data_105459b4.value;
}
