namespace {
struct Object {
    char padding_0[0x364];
    int flags;
};
}

extern "C" int fn_023a6fbc(void **arg0) {
    Object *object = (Object *) *arg0;
    if (object != 0) {
        object->flags |= 8;
    }
    return 0;
}
