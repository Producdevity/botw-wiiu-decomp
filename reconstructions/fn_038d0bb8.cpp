extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_038d15dc(void*, void*);

namespace {
struct Object {
    char padding_0[64];
    char mutex[1];
    char padding_41[276 - 64 - 1];
    char member[1];
};
}

extern "C" void fn_038d0bb8(int address, void *arg) {
    Object *object = (Object *)address;

    void *mutex = object->mutex;

    fn_030bb668(mutex);
    fn_038d15dc(object->member, arg);
    fn_030bb69c(mutex);
}
