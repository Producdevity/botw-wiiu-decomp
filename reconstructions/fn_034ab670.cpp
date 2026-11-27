namespace {
struct Object {
    unsigned char padding_0[0x10];
    unsigned int flags;
    unsigned char padding_14[0x18];
    int primary;
    unsigned char padding_30[0xC];
    int secondary;
};
}

extern "C" int fn_034ab670(void *arg0) {
    Object *object = static_cast<Object *>(arg0);
    if (object->flags & 2) {
        return object->secondary;
    }
    return object->primary;
}
