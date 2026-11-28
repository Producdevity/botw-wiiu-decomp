namespace {
typedef int (*Method)(void *);
typedef int (*MethodWithValue)(void *, int);

struct VirtualObject {
    char padding_0[0x94];
    void *const *vtable;
};
}

extern "C" void fn_03acb7a8(void*);

extern "C" void fn_03acb83c(void *object) {
    VirtualObject *view = (VirtualObject *) object;
    fn_03acb7a8(object);
    ((Method) view->vtable[7])(object);
    ((MethodWithValue) view->vtable[3])(object, 3);
}
