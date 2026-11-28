namespace {
struct Object {
    unsigned char padding_0[2];
    short count;
};
}

extern "C" void fn_029f2b40(void *object) {
    Object *self = static_cast<Object *>(object);
    if (self->count >= 0) {
        self->count++;
    }
}
