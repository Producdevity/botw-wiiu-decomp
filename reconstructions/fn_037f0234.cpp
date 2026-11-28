namespace {
struct Object {
    char padding_0[0xE0];
    void *value_e0;
    void *value_e4;
    void *value_e8;
    void *value_ec;
};
}

extern "C" void fn_037d739c(void*);
extern "C" int fn_037fbff0(void);

extern "C" void fn_037f0234(void *object) {
    Object *view = (Object *) object;
    fn_037fbff0();
    fn_037d739c(view->value_e0);
    fn_037d739c(view->value_e8);
    fn_037d739c(view->value_e4);
    fn_037d739c(view->value_ec);
}
