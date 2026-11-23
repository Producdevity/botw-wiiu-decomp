struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105456c4;

extern "C" int fn_0301133c() {
    ((Action)data_105456c4.vtable[7])(&data_105456c4);
    return data_105456c4.value;
}
