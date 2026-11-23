struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10547f1c;

extern "C" int fn_03043e90() {
    ((Action)data_10547f1c.vtable[7])(&data_10547f1c);
    return data_10547f1c.value;
}
