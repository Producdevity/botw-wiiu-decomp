namespace {
struct Object {
    char padding_0[0x38];
    unsigned char* source;
    char padding_3C[0x5];
    char flag;
};
}

extern "C" int fn_0293df90(void* object) {
    Object* self = (Object*)object;
    if (*self->source != 0) {
        self->flag = 0;
    }
    return 1;
}
