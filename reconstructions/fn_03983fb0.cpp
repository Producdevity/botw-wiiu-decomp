namespace {
struct Vtable {
    unsigned char padding_0[0x34];
    int (*check)(void *);
};

struct Object {
    unsigned char padding_0[0xC];
    Vtable *vtable;
};
}

extern "C" void fn_03983fb0(void **slot) {
    Object *object = static_cast<Object *>(*slot);
    if (object->vtable->check(object) == 0) {
        *slot = 0;
    }
}
