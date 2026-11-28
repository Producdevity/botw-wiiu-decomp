typedef unsigned short u16;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Owner {
    char padding_0[0x54];
    char lock[0x3C];
    u16 flags;
};
}

extern "C" void fn_030a8fa0(void *object) {
    Owner *owner = (Owner *)object;
    void *lock;

    if (owner->flags & 1) {
        lock = owner->lock;
        fn_030bb668(lock);
        if (lock != 0) {
            fn_030bb69c(lock);
        }
    }
}
