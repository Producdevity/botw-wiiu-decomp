namespace {
struct Object {
    char padding_0[0x123C];
    unsigned char *flag;
};
}

extern "C" int data_1054d374;
extern "C" int data_1054d39c;

extern "C" int *fn_032cf920(void *owner) {
    Object *object = (Object *) owner;
    if (*object->flag != 0) {
        return &data_1054d374;
    }
    return &data_1054d39c;
}
