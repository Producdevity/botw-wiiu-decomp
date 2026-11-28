namespace {
typedef int (*Method)(void *);

struct VirtualObject {
    char padding_0[0xC];
    void *const *vtable;
};
}

extern "C" void fn_02c64378(void*);

extern "C" void fn_02cec3a4(void *object) {
    VirtualObject *view = (VirtualObject *) object;
    fn_02c64378(object);
    ((Method) view->vtable[67])(object);
    ((Method) view->vtable[69])(object);
}
