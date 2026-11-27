typedef signed char s8;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    char padding_0[0xBDC];
    char lock[63];
    s8 flag;
};
}

extern "C" void fn_034050f4(void *object, s8 value) {
    Object *self;
    void *lock;

    self = (Object *)object;
    lock = self->lock;
    fn_030bb668(lock);
    self->flag = value;
    fn_030bb69c(lock);
}
