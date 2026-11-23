struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105409a8;

extern "C" int fn_02f9b720() {
    ((Action)data_105409a8.vtable[7])(&data_105409a8);
    return data_105409a8.value;
}
