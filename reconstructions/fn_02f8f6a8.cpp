struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10540030;

extern "C" int fn_02f8f6a8() {
    ((Action)data_10540030.vtable[7])(&data_10540030);
    return data_10540030.value;
}
