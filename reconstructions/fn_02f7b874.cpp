struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_1053f254;

extern "C" int fn_02f7b874() {
    ((Action)data_1053f254.vtable[7])(&data_1053f254);
    return data_1053f254.value;
}
