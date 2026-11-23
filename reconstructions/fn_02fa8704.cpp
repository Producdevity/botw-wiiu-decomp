struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105416e8;

extern "C" int fn_02fa8704() {
    ((Action)data_105416e8.vtable[7])(&data_105416e8);
    return data_105416e8.value;
}
