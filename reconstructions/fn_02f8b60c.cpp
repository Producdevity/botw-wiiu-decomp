struct Holder {
    int value;
    void* const* vtable;
};

typedef void (*Action)(Holder*);

extern "C" Holder data_1053fb88;

extern "C" int fn_02f8b60c() {
    ((Action)data_1053fb88.vtable[7])(&data_1053fb88);
    return data_1053fb88.value;
}
