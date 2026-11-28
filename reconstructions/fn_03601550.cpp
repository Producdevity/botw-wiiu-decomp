namespace {
struct Object {
    char padding_0[0x21C];
    int flags;
};
}

extern "C" int fn_03601358(void*, void*);

extern "C" void fn_03601550(void *object, void *other) {
    struct { int value; } local;

    ((Object *) object)->flags = 3;
    local.value = 0;
    if (fn_03601358(other, &local.value) != 0) {
        ((Object *) object)->flags |= local.value;
    }
}
