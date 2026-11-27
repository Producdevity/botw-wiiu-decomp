extern "C" void fn_020be9e4(void*);
extern "C" int fn_0339a0d0(void *);

namespace {
struct Object {
    char padding_0[0xE8];
    void *const *vtable;
};
}

extern "C" void fn_020beb08(void **holder) {
    if (fn_0339a0d0(*holder) != 0) {
        fn_020be9e4(holder);
        void *object = *holder;
        ((int (*)(void *))((Object *)object)->vtable[215])(object);
    }
}
