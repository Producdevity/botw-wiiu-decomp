namespace {
struct Object {
    unsigned char padding_0[6];
    unsigned short flags;
    unsigned char padding_8[0x24];
    int value;
};
}

extern "C" int fn_0311f664(signed char *out_flag, void *source) {
    if (source != 0) {
        *out_flag = (static_cast<Object *>(source)->flags >> 1) & 1;
        return static_cast<Object *>(source)->value;
    }
    return -1;
}
