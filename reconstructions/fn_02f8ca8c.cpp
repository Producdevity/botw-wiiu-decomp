struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_1053fd88;

extern "C" int fn_02f8ca8c() {
    ((Action)data_1053fd88.vtable[7])(&data_1053fd88);
    return data_1053fd88.value;
}
