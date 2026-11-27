namespace {
struct Object {
    unsigned char padding_0[0x98];
    unsigned char *source;
    unsigned char padding_9c[0xC];
    signed char flag;
};
}

extern "C" void fn_021d67a8(void *arg0) {
    Object *object = static_cast<Object *>(arg0);
    if (*object->source != 0) {
        object->flag = 1;
    }
}
