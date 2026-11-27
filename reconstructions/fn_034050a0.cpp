typedef signed char s8;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    unsigned char padding_0[0xBDC];
    unsigned char lock[0x3D];
    s8 flag;
};
}

extern "C" void fn_034050a0(void *arg0, s8 arg1) {
    Object *self = (Object *)arg0;
    void *lock = self->lock;
    fn_030bb668(lock);
    self->flag = arg1;
    fn_030bb69c(lock);
}
