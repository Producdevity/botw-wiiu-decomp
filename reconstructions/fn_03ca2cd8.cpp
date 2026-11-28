namespace {
struct Object {
    char padding_0[0x418];
    unsigned char first;
    unsigned char second;
    unsigned char third;
};
}

extern "C" int fn_03ca2cd8(void *object, unsigned char *first, unsigned char *second, unsigned char *third) {
    if ((first == 0) || (second == 0) || (third == 0)) {
        return 0xFF676984;
    }
    *first = ((Object *) object)->first;
    *second = ((Object *) object)->second;
    *third = ((Object *) object)->third;
    return 0;
}
