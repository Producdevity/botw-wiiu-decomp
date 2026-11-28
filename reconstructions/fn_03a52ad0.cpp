namespace {
typedef int (*Method)(void *, int);

struct VirtualObject {
    char padding_0[0x88];
    void *const *vtable;
};
}

extern "C" void fn_0308ed3c(void*);
extern "C" void fn_03a52a48(void*);

extern "C" void fn_03a52ad0(void *object) {
    fn_0308ed3c(object);
    fn_03a52a48(object);
    if (object != 0) {
        ((Method) ((VirtualObject *) object)->vtable[3])(object, 3);
    }
}
