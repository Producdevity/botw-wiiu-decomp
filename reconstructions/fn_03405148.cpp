typedef signed char s8;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    unsigned char padding_0[0xBDC];
    unsigned char lock[0x41];
    s8 flag;
};
}

extern "C" void fn_03405148(void *arg0, s8 arg1) {
    Object *self = (Object *)arg0;
    void *lock = self->lock;
    fn_030bb668(lock);
    self->flag = arg1;
    fn_030bb69c(lock);
}
