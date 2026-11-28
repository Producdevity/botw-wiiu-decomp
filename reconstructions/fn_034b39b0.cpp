namespace {
struct Object {
    unsigned char padding_0[8];
    int primary;
    unsigned int flags;
    unsigned char padding_10[0x18];
    int secondary;
};
}

extern "C" int fn_034b39b0(void *self) {
    Object *object = static_cast<Object *>(self);
    if (object->flags & 2) {
        return object->secondary;
    }
    return object->primary;
}
