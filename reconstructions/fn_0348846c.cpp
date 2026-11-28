namespace {
struct Vtable {
    unsigned char padding_0[0xC4];
    void (*callback)();
};

struct Object {
    unsigned char padding_0[0xC];
    Vtable *vtable;
};
}

extern "C" unsigned int fn_03488464(void *);

extern "C" void fn_0348846c(void *self) {
    Object *object = reinterpret_cast<Object *>(fn_03488464(self));
    object->vtable->callback();
}
