struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_105463cc;

extern "C" int fn_0302480c() {
    ((Action)data_105463cc.vtable[7])(&data_105463cc);
    return data_105463cc.value;
}
