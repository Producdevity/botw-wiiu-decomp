namespace {
struct Vtable {
    char padding_0[0x1C];
    void (*method_1c)(void *);
};

struct Object {
    char padding_0[0xa0];
    int value_a0;
    Vtable *vtable;
};
}

extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_10020834;

extern "C" void fn_020fd44c(void* self)
{
    Object *object = (Object *)self;
    Vtable *vtable = object->vtable;
    if (object != 0) {
        vtable->method_1c(&object->value_a0);
        fn_037946f0(self, object->value_a0, 1, 0, 0, data_10020834);
    }
}
