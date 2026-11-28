extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    char padding_0[0x140];
    char lock[0x5C8];
    int count;
    int flags;
};
}

extern "C" void fn_03844428(void *self) {
    Object *object = (Object *) self;
    void *lock = object->lock;
    int *count = &object->count;
    int *flags = &object->flags;
    fn_030bb668(lock);
    *flags = *flags | 0x80;
    *count = *count + 1;
    fn_030bb69c(lock);
}
