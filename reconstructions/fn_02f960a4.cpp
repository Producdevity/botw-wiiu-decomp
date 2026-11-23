struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_1054052c;

extern "C" int fn_02f960a4() {
    ((Action)data_1054052c.vtable[7])(&data_1054052c);
    return data_1054052c.value;
}
