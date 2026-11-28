namespace {
struct Object {
    char padding_0[0x24];
    void *self;
};
}

extern "C" void fn_0398a8b0(void *owner, int enabled) {
    Object *object = (Object *) owner;
    void *self = 0;
    if (enabled != 0) {
        self = owner;
    }
    object->self = self;
}
