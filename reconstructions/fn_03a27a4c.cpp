namespace {
struct Vtable {
    char padding_0[0xC4];
    void (*slot_c4)(void*);
    char padding_c8[0x24];
    void (*slot_ec)(void*, int);
};

struct Object {
    char padding_0[0x10];
    Vtable* vtable;
    char padding_14[8];
    unsigned char state;
};
}

extern "C" int fn_03a27a4c(void* self)
{
    Object* object = static_cast<Object*>(self);
    unsigned char state = object->state;
    switch (state) {
    case 4:
        return 0;
    case 5:
        object->vtable->slot_c4(self);
        object->vtable->slot_ec(self, 6);
        return 1;
    default:
        return 1;
    }
}
