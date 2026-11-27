namespace {
struct Object {
    unsigned char padding_0[0x28];
    unsigned char *source;
    unsigned char padding_2c[0x7C];
    unsigned char disabled;
};
}

extern "C" unsigned char fn_022ddbe4(void *arg0) {
    Object *object = static_cast<Object *>(arg0);
    if (object->disabled == 0) {
        return *object->source;
    }
    return 0;
}
