struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10547a70;

extern "C" int fn_0303ac50() {
    ((Action)data_10547a70.vtable[7])(&data_10547a70);
    return data_10547a70.value;
}
