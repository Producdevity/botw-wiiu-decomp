namespace {
struct Vtable {
    char padding_0[0x44];
    void (*method_44)(void *);
};

struct Object {
    char padding_0[7];
    unsigned char state;
    char padding_8[4];
    int value_c;
    Vtable *vtable;
};
}

extern "C" int fn_030ffb44(void* self)
{
    if (((Object *)self)->state == 1) {
        ((Object *)self)->vtable->method_44(self);
    }
    Object *object = (Object *)self;
    object->state = 0;
    return object->value_c;
}
