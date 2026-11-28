namespace {
struct Vtable {
    char padding_0[0xAC];
    void (*slot_ac)(void*);
    char padding_b0[0x3C];
    void (*slot_ec)(void*, int);
};
struct Object {
    char padding_0[0x10];
    Vtable* vtable;
    char padding_14[8];
    unsigned char state;
};
}
extern "C" int fn_03a27814(void* self)
{
    Object* object = static_cast<Object*>(self);
    unsigned char state = object->state;
    switch (state) {
    case 0:
    case 2:
        object->vtable->slot_ac(self);
        object->vtable->slot_ec(self, 1);
        return 1;
    case 4:
    case 6:
        return 0;
    default:
        return 1;
    }
}
