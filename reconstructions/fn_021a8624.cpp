typedef unsigned char u8;

extern "C" int fn_03076fec(void*);
extern "C" void fn_030ea2cc(void *);

namespace {
struct Object {
    char padding_0[0xB];
    u8 flags;
};
}

extern "C" void fn_021a8624(void *object) {
    if (fn_03076fec(object) != 0) {
        fn_030ea2cc(object);
        ((Object *) object)->flags |= 4;
    }
}
