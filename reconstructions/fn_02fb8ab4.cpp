struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10541ee0;

extern "C" int fn_02fb8ab4() {
    ((Action)data_10541ee0.vtable[7])(&data_10541ee0);
    return data_10541ee0.value;
}
