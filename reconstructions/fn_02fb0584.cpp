struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10541d38;

extern "C" int fn_02fb0584() {
    ((Action)data_10541d38.vtable[7])(&data_10541d38);
    return data_10541d38.value;
}
