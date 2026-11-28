namespace {
struct Object {
    char padding_0[0x11C];
    void *value_11c;
    signed char flag;
};
}

extern "C" void fn_02c56f08(void*);
extern "C" void fn_03191b40(void*, void*, void*);

extern "C" void *data_1046cf88;

extern "C" void fn_02c47798(void *object) {
    Object *view = (Object *) object;
    fn_02c56f08(object);
    fn_03191b40(data_1046cf88, 0, view->value_11c);
    view->flag = 0;
}
