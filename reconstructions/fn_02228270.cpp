namespace {
struct Object {
    char padding_0[0xB];
    unsigned char flags;
    char padding_C[0x8];
    unsigned char* source;
};
}

extern "C" void fn_02228270(void* object) {
    Object *self = (Object *)object;
    if (*self->source != 0) {
        self->flags |= 4;
    }
}
