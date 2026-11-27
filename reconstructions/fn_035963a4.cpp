typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    char padding_0[0x564];
    s32 count;
    char lock;
};
}

extern "C" void fn_035963a4(void *object) {
    Object *self;
    void *lock;

    self = (Object *)object;
    lock = &self->lock;
    fn_030bb668(lock);
    self->count = 0;
    fn_030bb69c(lock);
}
