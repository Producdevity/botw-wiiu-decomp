typedef unsigned short u16;

namespace {
struct Object {
    char padding_0[0x54];
    char lock[0x3C];
    u16 flags;
};
}

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

extern "C" void fn_042136a4(void *self) {
    Object *object = (Object *)self;
    if (object->flags & 1) {
        void *lock = object->lock;
        fn_030bb668(lock);
        if (lock != 0) {
            fn_030bb69c(lock);
        }
    }
}
