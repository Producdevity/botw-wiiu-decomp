extern "C" void fn_03021a40(void*, void*, void*);
extern "C" void fn_03a3fd18(void *);

namespace {
struct Owner {
    unsigned char padding_0[0x1B68];
    void *slot;
};
}

extern "C" void fn_03021dc4(void *object) {
    void *slot = ((Owner *)object)->slot;
    if (slot != (void *)-1) {
        fn_03021a40(object, slot, 0);
        fn_03a3fd18(object);
    }
}
