struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105453fc;

extern "C" int fn_0300e2d0() {
    ((Action)data_105453fc.vtable[7])(&data_105453fc);
    return data_105453fc.value;
}
