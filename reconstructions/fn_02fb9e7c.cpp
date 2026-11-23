struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10542038;

extern "C" int fn_02fb9e7c() {
    ((Action)data_10542038.vtable[7])(&data_10542038);
    return data_10542038.value;
}
