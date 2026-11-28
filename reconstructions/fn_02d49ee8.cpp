typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Target {
    unsigned char padding_0[0x858];
    unsigned char lock[0x3C];
    s32 flags;
};

struct Owner {
    unsigned char padding_0[0x30];
    Target *target;
};
}

extern "C" void fn_02d49ee8(void *owner) {
    void *lock;
    Target *target;

    target = ((Owner *)owner)->target;
    if (target != 0) {
        lock = target->lock;
        fn_030bb668(lock);
        target->flags = target->flags | 0x100;
        fn_030bb69c(lock);
    }
}
