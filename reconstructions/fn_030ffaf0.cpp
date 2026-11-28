namespace {
struct Vtable {
    char padding_0[0x4C];
    void (*method_4C)(void *);
};

struct Object {
    char padding_0[7];
    unsigned char state;
    char padding_8[4];
    int value_c;
    Vtable *vtable;
};
}

extern "C" int fn_030ffaf0(void* self)
{
    if (((Object *)self)->state == 2) {
        ((Object *)self)->vtable->method_4C(self);
        ((Object *)self)->state = 0;
    }
    Object *object = (Object *)self;
    return object->value_c;
}
