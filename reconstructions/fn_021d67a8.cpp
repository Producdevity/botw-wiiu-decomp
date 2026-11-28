namespace {
struct Object {
    unsigned char padding_0[0x98];
    unsigned char *source;
    unsigned char padding_9c[0xC];
    signed char flag;
};
}

extern "C" void fn_021d67a8(void *object) {
    Object *self = static_cast<Object *>(object);
    if (*self->source != 0) {
        self->flag = 1;
    }
}
