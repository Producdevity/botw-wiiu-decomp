namespace {
struct Object {
    char padding_0[0x98];
    signed char value_98;
    signed char value_99;
};
}

extern "C" void fn_02512d14(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" int data_10104768;

extern "C" void fn_02669b4c(void *object) {
    fn_02512d14(object);
    ((Object *) object)->value_99 = 0;
    ((Object *) object)->value_98 = 0;
    fn_037b8284(object, &data_10104768, 0);
}
