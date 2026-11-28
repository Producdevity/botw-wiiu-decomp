namespace {
struct Object {
    char padding_0[0xE8];
    char *table_e8;
};
}

extern "C" int fn_02b29d28(void *object)
{
    char *slot = ((Object *)object)->table_e8;
    slot = slot + 0x2BC;
    int *source = (*(int *(**)(void *))slot)(object);
    int value = 1;
    if (source != 0) {
        value = *source;
    }
    return value == 1;
}
