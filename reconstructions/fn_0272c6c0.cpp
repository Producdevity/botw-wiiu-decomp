namespace {
struct ClassInfo {
    char padding_0[0x2BC];
    int *(*get_value)(void *);
};
struct Owner {
    char padding_0[0xE8];
    ClassInfo *info;
};
struct Object {
    Owner *owner;
    char padding_4[0x38];
    char member[0x174];
    int value;
    unsigned char skip_init;
};
}

extern "C" void fn_02b27414(void *);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" int data_1011f0d0;

extern "C" void fn_0272c6c0(void *object, void *context) {
    int *source;
    int value;
    Owner *owner;
    if (((Object *)object)->skip_init == 0) {
        fn_02b27414(((Object *)object)->member);
    }
    owner = ((Object *)object)->owner;
    source = owner->info->get_value(owner);
    value = 1;
    if (source != 0) {
        value = *source;
    }
    ((Object *)object)->value = value;
    fn_037b8284(object, &data_1011f0d0, context);
}
