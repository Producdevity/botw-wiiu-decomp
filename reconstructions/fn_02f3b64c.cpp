struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10531488;

extern "C" int fn_02f3b64c() {
    ((Action)data_10531488.vtable[7])(&data_10531488);
    return data_10531488.value;
}
