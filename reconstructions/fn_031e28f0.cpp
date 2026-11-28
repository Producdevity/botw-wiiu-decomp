extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_031e5afc(void*, int);

namespace {
struct Object {
    char padding_0[0x38];
    char lock[1];
};
}

extern "C" void fn_031e28f0(void *object, void *target) {
    void *lock;

    lock = ((Object *) object)->lock;
    fn_030bb668(lock);
    fn_031e5afc(target, 1);
    fn_030bb69c(lock);
}
