struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10545840;

extern "C" int fn_03014d3c() {
    ((Action)data_10545840.vtable[7])(&data_10545840);
    return data_10545840.value;
}
