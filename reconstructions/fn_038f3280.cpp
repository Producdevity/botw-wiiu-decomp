namespace {
typedef int (*Method)(void *, int);

struct Object {
    char padding_0[4];
    unsigned char enabled;
    unsigned char pending;
    char padding_6[2];
    void *const *vtable;
};
}

extern "C" void fn_038f31c4(void*);

extern "C" void fn_038f3280(void* object, int value) {
    if (((Object *) object)->pending != 0) {
        fn_038f31c4(object);
    }
    if (((Object *) object)->enabled != 0) {
        ((Method) ((Object *) object)->vtable[11])(object, value);
    }
}
