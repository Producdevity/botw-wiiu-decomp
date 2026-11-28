namespace {
struct Vtable {
    char padding_0[0x1C];
    void (*method_1c)(void *);
};

struct Object {
    void *owner;
    char padding_4[0x14];
    int value_18;
    Vtable *vtable;
    unsigned char *flag_20;
};
}

extern "C" void fn_0383e968(void* owner, int value, int a, int b);

extern "C" void fn_029cc450(void* object) {
    if (*((Object *)object)->flag_20 != 0) {
        ((Object *)object)->vtable->method_1c(&((Object *)object)->value_18);
        fn_0383e968(((Object *)object)->owner, ((Object *)object)->value_18, 2, 0);
    }
}
