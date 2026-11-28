namespace {
struct Source {
    unsigned char padding_0[8];
    int value;
};

struct Object {
    void *source;
    int value;
};
}

extern "C" void fn_03baa3e8(void *self, void *source) {
    Object *object = static_cast<Object *>(self);
    object->source = source;
    if (source != 0) {
        object->value = static_cast<Source *>(source)->value;
    }
}
