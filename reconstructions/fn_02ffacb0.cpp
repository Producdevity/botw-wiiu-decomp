struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105443c8;

extern "C" int fn_02ffacb0() {
    ((Action)data_105443c8.vtable[7])(&data_105443c8);
    return data_105443c8.value;
}
