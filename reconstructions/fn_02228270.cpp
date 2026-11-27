namespace {
struct Object {
    char padding_0[0xB];
    unsigned char flags;
    char padding_C[0x8];
    unsigned char* source;
};
}

extern "C" void fn_02228270(void* arg0) {
    Object* object = (Object*)arg0;
    if (*object->source != 0) {
        object->flags |= 4;
    }
}
