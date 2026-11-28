extern "C" void fn_030a6494(void *);
extern "C" void fn_030a6528(void *);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    char padding_0[0x54];
    char lock[0x3C];
    unsigned short flags;
};
}

extern "C" void fn_030a7ff4(void *self) {
    Object *object = (Object *)self;
    void *lock = 0;
    if (object->flags & 1) {
        lock = object->lock;
        fn_030bb668(lock);
    }
    fn_030a6494(self);
    fn_030a6528(self);
    if (lock != 0) {
        fn_030bb69c(lock);
    }
}
