namespace {
struct Inner {
    char padding_0[0xA];
    unsigned short value;
};
struct Object {
    char padding_0[8];
    Inner *inner;
};
}

extern "C" unsigned short fn_03c46fe4(void *arg0) {
    Object *object = (Object *) arg0;
    Inner *inner = object->inner;
    if (inner != 0) {
        return inner->value;
    }
    return 0;
}
