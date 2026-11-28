namespace {
struct Object {
    char padding_0[0x1BC];
    unsigned int* source;
    char padding_1C0[0x22];
    char flag;
};
}

extern "C" void fn_02b9a028(void* object) {
    Object* self = (Object*)object;
    unsigned int value = *self->source;
    if (value < 2) {
        self->flag = value;
    }
}
