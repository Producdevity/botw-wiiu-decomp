struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_10546588;

extern "C" int fn_0302b174() {
    ((Action)data_10546588.vtable[7])(&data_10546588);
    return data_10546588.value;
}
