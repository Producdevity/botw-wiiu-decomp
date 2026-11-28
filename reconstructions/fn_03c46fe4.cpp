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

extern "C" unsigned short fn_03c46fe4(void *self) {
    Inner *inner = static_cast<Object *>(self)->inner;
    if (inner != 0) {
        return inner->value;
    }
    return 0;
}
