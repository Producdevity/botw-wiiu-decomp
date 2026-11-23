struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10547bd0;

extern "C" int fn_0303e73c() {
    ((Action)data_10547bd0.vtable[7])(&data_10547bd0);
    return data_10547bd0.value;
}
