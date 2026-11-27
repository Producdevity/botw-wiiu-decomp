extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_0390112c(void*, void*);

namespace {
struct Object {
    char padding_0[1372];
    char member[1];
    char padding_55d[1392 - 1372 - 1];
    char mutex[1];
};
}

extern "C" void fn_038ffbd4(int address, void *arg) {
    Object *object = (Object *)address;

    void *mutex = object->mutex;

    fn_030bb668(mutex);
    fn_0390112c(object->member, arg);
    fn_030bb69c(mutex);
}
