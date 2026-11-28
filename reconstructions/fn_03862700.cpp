namespace {
struct Object {
    unsigned char padding_0[6];
    short value;
};
}

extern "C" short fn_03862700(void *object) {
    short value = static_cast<Object *>(object)->value;
    if (value >= 0) {
        return value;
    }
    return 1;
}
