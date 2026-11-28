namespace {
typedef int (*Method)(void *);

struct VirtualObject {
    char padding_0[0xC];
    void *const *vtable;
};
}

extern "C" void fn_02550ce4(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" int data_100dd39c;

extern "C" void fn_02551664(void *object) {
    fn_02550ce4(object);
    ((Method) ((VirtualObject *) object)->vtable[69])(object);
    fn_037b8284(object, &data_100dd39c, 0);
}
