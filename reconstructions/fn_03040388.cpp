struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10547d30;

extern "C" int fn_03040388() {
    ((Action)data_10547d30.vtable[7])(&data_10547d30);
    return data_10547d30.value;
}
