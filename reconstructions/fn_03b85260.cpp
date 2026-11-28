namespace {
struct VTable {
    char padding_0[0x5C];
    unsigned int (*getFlags)();
};

struct Object {
    char padding_0[0xC];
    VTable* vtable;
};
}

extern "C" int fn_03b85260(void *owner) {
    Object* object = (Object*)owner;
    return (object->vtable->getFlags() >> 2) & 1;
}
