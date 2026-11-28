typedef signed char s8;

extern "C" int fn_035145c0(void*);
extern "C" void fn_0351edbc(void*);

namespace {
struct Owner {
    char padding_0[0x1A8];
    s8 flag;
};
struct Object {
    char padding_0[0x70];
    Owner *owner;
    void *target;
};
}

extern "C" void fn_0351462c(void *object) {
    ((Object *) object)->owner->flag = 1;
    if (fn_035145c0(object) != 0) {
        fn_0351edbc(((Object *) object)->target);
    }
}
