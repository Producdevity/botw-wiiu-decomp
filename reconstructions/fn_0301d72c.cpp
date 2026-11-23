struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10545d0c;

extern "C" int fn_0301d72c() {
    ((Action)data_10545d0c.vtable[7])(&data_10545d0c);
    return data_10545d0c.value;
}
