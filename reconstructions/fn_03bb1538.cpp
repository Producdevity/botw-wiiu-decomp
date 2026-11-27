namespace {
struct Singleton {
    char padding_0[0x2C];
    void *field_2c;
};
}

extern "C" void *data_1047f05c;

extern "C" void *fn_03bb1538(void) {
    Singleton *instance = (Singleton *) data_1047f05c;
    if (instance != 0) {
        return instance->field_2c;
    }
    return data_1047f05c;
}
