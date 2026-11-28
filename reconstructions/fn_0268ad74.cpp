namespace {
typedef unsigned int *(*Method)(void **);

struct Object {
    char padding_0[0x74];
    int count;
};
}

extern "C" int fn_0268ad74(void *object, void **other) {
    void *const *vtable;
    if (*((Method) (vtable = *(void *const **) other)[9])(other) == 0x08000043U) {
        ((Object *) object)->count++;
    }
    return 0;
}
