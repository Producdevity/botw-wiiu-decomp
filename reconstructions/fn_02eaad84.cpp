namespace {
struct Object {
    char padding_0[0x1C];
    char member_1c[0x18];
    float value_34;
    char padding_38[0xC];
    char member_44[0x18];
    float value_5c;
};
}

extern "C" void fn_02eaad34(void*);
extern "C" void fn_03060c94(void*, float);

extern "C" void fn_02eaad84(void *object) {
    Object *view = (Object *)object;
    fn_03060c94(view->member_1c, view->value_34);
    fn_03060c94(view->member_44, view->value_5c);
    fn_02eaad34(object);
}
