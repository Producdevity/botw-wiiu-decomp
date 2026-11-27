extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_038d1684(void*, void*);

namespace {
struct Object {
    char padding_0[184];
    char mutex[1];
    char padding_b9[308 - 184 - 1];
    char member[1];
};
}

extern "C" void fn_038d0c70(int address, void *arg) {
    Object *object = (Object *)address;

    void *mutex = object->mutex;

    fn_030bb668(mutex);
    fn_038d1684(object->member, arg);
    fn_030bb69c(mutex);
}
