extern "C" void fn_0233ad30(void*);
extern "C" void fn_030ea2cc(void *);
extern "C" bool fn_0370e3bc(void *, int, int);

namespace {
struct Owner {
    unsigned char padding_0[0x394];
    void *component;
};
}

extern "C" void fn_0233c548(void **object) {
    fn_0233ad30(object);
    if (fn_0370e3bc(static_cast<Owner *>(*object)->component, 0, 0) != 0) {
        fn_030ea2cc(object);
    }
}
