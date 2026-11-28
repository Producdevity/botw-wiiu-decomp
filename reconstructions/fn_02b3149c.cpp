typedef unsigned char u8;

extern "C" void fn_02b30f3c(void*, void*);
extern "C" void fn_02b31208(void*);

namespace {
struct Object {
    char padding_0[0x4C];
    void *target;
    u8 pending;
};
}

extern "C" void fn_02b3149c(void *object) {
    if (((Object *) object)->pending != 0) {
        ((Object *) object)->pending = 0;
        fn_02b30f3c(object, ((Object *) object)->target);
        fn_02b31208(object);
    }
}
