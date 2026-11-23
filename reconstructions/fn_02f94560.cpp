struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105403b4;

extern "C" int fn_02f94560() {
    ((Action)data_105403b4.vtable[7])(&data_105403b4);
    return data_105403b4.value;
}
