namespace {
struct Vtable {
    unsigned char padding_0[0x5C];
    unsigned int (*getFlags)();
};

struct Object {
    unsigned char padding_0[0xC];
    Vtable *vtable;
};
}

extern "C" int fn_03b8f62c(void *owner) {
    Object *object = static_cast<Object *>(owner);
    return (object->vtable->getFlags() >> 1) & 1;
}
