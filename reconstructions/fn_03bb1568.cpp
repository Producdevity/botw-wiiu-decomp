namespace {
struct Singleton {
    char padding_0[0x34];
    void *field_34;
};
}

extern "C" void *data_1047f05c;

extern "C" void *fn_03bb1568(void) {
    Singleton *instance = (Singleton *) data_1047f05c;
    if (instance != 0) {
        return instance->field_34;
    }
    return data_1047f05c;
}
