namespace {
typedef int (*Method)(void *);

struct Object {
    char padding_0[0xC];
    void *const *vtable;
    char padding_10[0x68];
    int value_78;
};
}

extern "C" void fn_026ee37c(void*, float);

extern "C" float data_101189f8;

extern "C" void fn_026ee3ec(void *object) {
    Object *view = (Object *) object;
    fn_026ee37c(object, data_101189f8);
    ((Method) view->vtable[79])(object);
    view->value_78 = 0;
}
