struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10547910;

extern "C" int fn_03037ec0() {
    ((Action)data_10547910.vtable[7])(&data_10547910);
    return data_10547910.value;
}
