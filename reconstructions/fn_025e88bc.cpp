namespace {
struct Object {
    void *owner;
    char padding_4[0x68];
    void **chain;
};
}

extern "C" void fn_02b7b4fc(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" int data_100f1648;

extern "C" void fn_025e88bc(void *object) {
    Object *view = (Object *) object;
    fn_02b7b4fc(view->owner, *view->chain);
    fn_037b8284(object, &data_100f1648, 0);
}
