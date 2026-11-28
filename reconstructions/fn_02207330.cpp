extern "C" void fn_02b85948(void*, int, int, int);

namespace {
struct Provider {
    char padding_0[0x1C];
    int (*callback)(void *);
};
struct Object {
    char padding_0[0x10];
    int *source;
    int value;
    Provider *provider;
};
}

extern "C" int fn_02207330(void* object, int count) {
    ((Object *) object)->provider->callback((char *) object + 20);
    fn_02b85948((char *) object + 28, count, ((Object *) object)->value, *((Object *) object)->source);
    return 1;
}
