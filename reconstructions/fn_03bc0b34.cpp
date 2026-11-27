namespace {
struct Parent {
    unsigned char padding_0[244];
    int handle;
};
}

extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void fn_03bbfc44(int, int);
extern "C" int fn_03bc3914();

extern "C" int fn_03bc0b34(void* parent, void* heap) {
    int created;
    if ((parent == 0) || (fn_0308e5a0(0x14U, heap, 4) == 0) || (created = fn_03bc3914(), created == 0)) {
        return 0;
    }
    fn_03bbfc44(((Parent *)parent)->handle, created);
    return created;
}
