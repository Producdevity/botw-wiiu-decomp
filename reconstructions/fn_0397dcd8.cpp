namespace {
struct Object {
    char padding_0[0x74];
    char member_74[1];
    char padding_75[0xBF];
    int value_134;
    char padding_138[0x70];
    int value_1a8;
};
}

extern "C" int fn_0397cf88(void*);

extern "C" int fn_0397dcd8(void *object) {
    if (((Object *)object)->value_134 != 0 && ((Object *)object)->value_1a8 != 0 && fn_0397cf88(((Object *)object)->member_74) != 0) {
        return 1;
    }
    return 0;
}
