namespace {
struct Object {
    void *owner;
    char padding_4[0x1C];
    signed char value_20;
};
}

extern "C" int fn_0339a0d0(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" int data_1029c86c;

extern "C" void fn_032718ec(void *object) {
    Object *view = (Object *) object;
    view->value_20 = fn_0339a0d0(view->owner);
    fn_037b8284(object, &data_1029c86c, 0);
}
