namespace {
struct Object {
    char padding_0[0xE8];
    void *const *vtable;
};
struct Target {
    char padding_0[8];
    unsigned flags;
};
}

extern "C" int fn_022e6334(void **holder) {
    void *object = *holder;
    Target *target = (Target *)((void *(*)(void *))((Object *)object)->vtable[195])(object);

    if (target != 0 && ((target->flags >> 6) & 1)) {
        return 1;
    }
    return 0;
}
