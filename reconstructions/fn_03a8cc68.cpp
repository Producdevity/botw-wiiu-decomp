namespace {
struct Object {
    char padding_0[4];
    char member_4[0xB8];
    char member_bc[0x90];
    char member_14c[0xC];
    float value_158;
    float value_15c;
    void *value_160;
    void *value_164;
};
}

extern "C" void fn_03a8c7d0(void*, void*, float, float);
extern "C" void fn_03a8c8dc(void*, void*, void*);

extern "C" void fn_03a8cc68(void *object, void *argument) {
    Object *view = (Object *)object;
    fn_03a8c7d0(view->member_4, argument, view->value_158, view->value_15c);
    fn_03a8c8dc(view->member_bc, view->value_160, view->member_14c);
    view->value_164 = view->value_160;
}
