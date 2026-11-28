namespace {
struct Object {
    char padding_0[0x68C];
    void *value_68c;
    char member_690[1];
};
}

extern "C" void fn_03a4d6c8(unsigned *);
extern "C" void fn_03ac4e2c(void*, void*);

extern "C" void *data_1047eb9c;

extern "C" void fn_03aecaf0(void *object) {
    Object *view = (Object *)object;
    fn_03ac4e2c(data_1047eb9c, view->value_68c);
    view->value_68c = 0;
    fn_03a4d6c8((unsigned *)view->member_690);
}
