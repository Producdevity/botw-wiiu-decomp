namespace {
struct Object {
    unsigned char padding_0[6];
    unsigned short flags;
    unsigned char padding_8[0x24];
    int value;
};
}

extern "C" int fn_0311f664(signed char *arg0, void *arg1) {
    if (arg1 != 0) {
        *arg0 = (static_cast<Object *>(arg1)->flags >> 1) & 1;
        return static_cast<Object *>(arg1)->value;
    }
    return -1;
}
