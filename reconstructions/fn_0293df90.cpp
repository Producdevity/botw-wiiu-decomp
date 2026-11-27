namespace {
struct Object {
    char padding_0[0x38];
    unsigned char* source;
    char padding_3C[0x5];
    char flag;
};
}

extern "C" int fn_0293df90(void* arg0) {
    Object* object = (Object*)arg0;
    if (*object->source != 0) {
        object->flag = 0;
    }
    return 1;
}
