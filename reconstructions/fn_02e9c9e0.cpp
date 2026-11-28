namespace {
typedef int (*Method)(void *, int);

struct VirtualObject {
    char padding_0[0x3C];
    void *const *vtable;
};
}

extern "C" void fn_02e91f88(void*);

extern "C" unsigned char data_1046991c;

extern "C" void fn_02e9c9e0(void *object) {
    void *const *vtable;
    fn_02e91f88(object);
    if (data_1046991c != 0) {
        ((Method) (vtable = ((VirtualObject *) object)->vtable)[49])(object, 0);
    }
}
