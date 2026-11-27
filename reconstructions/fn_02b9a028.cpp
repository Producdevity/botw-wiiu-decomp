namespace {
struct Object {
    char padding_0[0x1BC];
    unsigned int* source;
    char padding_1C0[0x22];
    char flag;
};
}

extern "C" void fn_02b9a028(void* arg0) {
    Object* object = (Object*)arg0;
    unsigned int value = *object->source;
    if (value < 2) {
        object->flag = (char)value;
    }
}
