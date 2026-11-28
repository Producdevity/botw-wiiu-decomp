extern "C" void fn_03467dd8(void);

namespace {
struct Vtable {
    unsigned char padding_0[0x16C];
    int (*check)(void *);
};

struct Target {
    unsigned char padding_0[0xE8];
    Vtable *vtable;
};

struct Object {
    Target *target;
    unsigned char padding_4[0x20];
    signed char flag_24;
};
}

extern "C" void fn_0230c72c(void *object) {
    Target *target = static_cast<Object *>(object)->target;
    static_cast<Object *>(object)->flag_24 = 0;
    if (target->vtable->check(target) != 0) {
        fn_03467dd8();
    }
}
