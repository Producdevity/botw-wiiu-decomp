extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_038d1630(void*, void*);

namespace {
struct Object {
    char padding_0[124];
    char mutex[1];
    char padding_7d[292 - 124 - 1];
    char member[1];
};
}

extern "C" void fn_038d0c14(int address, void *arg) {
    Object *object = (Object *)address;

    void *mutex = object->mutex;

    fn_030bb668(mutex);
    fn_038d1630(object->member, arg);
    fn_030bb69c(mutex);
}
