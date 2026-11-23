struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_1054626c;

extern "C" int fn_03021e0c() {
    ((Action)data_1054626c.vtable[7])(&data_1054626c);
    return data_1054626c.value;
}
