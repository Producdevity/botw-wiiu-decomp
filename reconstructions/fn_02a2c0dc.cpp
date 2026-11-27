namespace {
struct Object {
    unsigned char padding_0[480];
    int value;
};
}

extern "C" int fn_030b0964(void*, int);

extern "C" int fn_02a2c0dc(void* arg0) {
    Object *self = (Object *)arg0;
    int snapshot = self->value;
    if ((snapshot == 0) || (fn_030b0964(&snapshot, 4) == 2)) {
        return 0;
    }
    return self->value;
}
