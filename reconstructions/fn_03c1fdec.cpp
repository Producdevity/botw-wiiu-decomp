namespace {
struct Object {
    char padding_0[0x2D4];
    void *value_2d4;
    char padding_2d8[0xE];
    unsigned char flag;
};
}

extern "C" void fn_03c1fa08(void*, void*);
extern "C" void fn_03c1fb90(void*);

extern "C" void fn_03c1fdec(void *object, void *value) {
    Object *view = (Object *) object;
    view->value_2d4 = value;
    if (view->flag != 0) {
        fn_03c1fa08(object, value);
        fn_03c1fb90(object);
    }
}
