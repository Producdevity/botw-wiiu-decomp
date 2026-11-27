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

extern "C" void fn_0272c6c0(void *arg0, void *arg1) {
    int *source;
    int value;
    Owner *owner;
    if (((Object *) arg0)->skip_init == 0) {
        fn_02b27414(((Object *) arg0)->member);
    }
    owner = ((Object *) arg0)->owner;
    source = owner->info->get_value(owner);
    value = 1;
    if (source != 0) {
        value = *source;
    }
    ((Object *) arg0)->value = value;
    fn_037b8284(arg0, &data_1011f0d0, arg1);
}
