namespace {
struct Source {
    unsigned char padding_0[0x34];
    unsigned char value;
};

struct Object {
    unsigned char padding_0[4];
    Source *source;
    unsigned char padding_8[0x3C];
    unsigned char value;
};
}

extern "C" void fn_0316fea8(void *self) {
    Object *object = static_cast<Object *>(self);
    Source *source = object->source;
    if (source != 0) {
        object->value = source->value;
    }
}
