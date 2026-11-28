namespace {
struct Object {
    unsigned char padding_0[0xAE];
    unsigned short count;
    unsigned char bytes[1];
};
}

extern "C" unsigned char fn_03bad66c(void *self, int index) {
    Object *object = static_cast<Object *>(self);
    if (index < 0 || index >= object->count) {
        return 0;
    }
    return object->bytes[index];
}
