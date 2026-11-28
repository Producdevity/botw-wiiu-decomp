namespace {
struct Object {
    unsigned char padding_0[0x28];
    unsigned char *source;
    unsigned char padding_2c[0x7C];
    unsigned char disabled;
};
}

extern "C" unsigned char fn_022ddbe4(void *object) {
    Object *self = static_cast<Object *>(object);
    if (self->disabled == 0) {
        return *self->source;
    }
    return 0;
}
