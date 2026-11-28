namespace {
struct Vtable {
    char padding_0[0x1C];
    void (*method_1c)(void *);
};

struct Object {
    char padding_0[0x20];
    int value_20;
    Vtable *vtable;
};
}

extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_1003a844;

extern "C" void fn_0218e3d4(void* self)
{
    Object *object = (Object *)self;
    Vtable *vtable = object->vtable;
    if (object != 0) {
        vtable->method_1c(&object->value_20);
        fn_037946f0(self, object->value_20, 1, 0, 0, data_1003a844);
    }
}
