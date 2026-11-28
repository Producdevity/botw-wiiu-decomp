namespace {
struct Vtable {
    char padding_0[0x1C];
    void (*method_1c)(void *);
};

struct Object {
    char padding_0[0x74];
    int value_74;
    Vtable *vtable;
};
}

extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_1007f3f8;

extern "C" void fn_02305354(void* self)
{
    Object *object = (Object *)self;
    Vtable *vtable = object->vtable;
    if (object != 0) {
        vtable->method_1c(&object->value_74);
        fn_037946f0(self, object->value_74, 1, 0, 0, data_1007f3f8);
    }
}
