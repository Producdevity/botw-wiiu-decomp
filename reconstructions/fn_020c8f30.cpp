extern "C" void fn_032d44a4(void*);
extern "C" void fn_032e1448(void);

namespace {
struct Object {
    char padding_0[0xE8];
    void *const *vtable;
};
}

extern "C" void fn_020c8f30(void **holder) {
    fn_032d44a4(holder);
    void *object = *holder;
    if (((int (*)(void *))((Object *)object)->vtable[265])(object) != 0) {
        fn_032e1448();
    }
}
