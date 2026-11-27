namespace {
struct Handle {
    void *object;
};
struct Object {
    char padding_0[0xE8];
    void *const *vtable;
};
struct Target {
    char padding_0[0x88];
    unsigned char kind;
};
}

extern "C" int fn_02035bf8(void **holder) {
    void *object = *holder;
    Target *target = (Target *)((void *(*)(void *))((Object *)object)->vtable[195])(object);

    if (target != 0 && target->kind == 2) {
        return 1;
    }
    return 0;
}
