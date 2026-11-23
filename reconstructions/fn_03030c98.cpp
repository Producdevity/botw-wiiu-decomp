struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105477b8;

extern "C" int fn_03030c98() {
    ((Action)data_105477b8.vtable[7])(&data_105477b8);
    return data_105477b8.value;
}
