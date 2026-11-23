struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105433f0;

extern "C" int fn_02fda690() {
    ((Action)data_105433f0.vtable[7])(&data_105433f0);
    return data_105433f0.value;
}
