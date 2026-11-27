typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    unsigned char padding_0[0x22C];
    unsigned char lock[0x3C];
    s32 counter;
};
}

extern "C" void fn_035810d8(void *arg0) {
    Object *self = (Object *)arg0;
    void *lock = self->lock;
    fn_030bb668(lock);
    self->counter += 1;
    fn_030bb69c(lock);
}
