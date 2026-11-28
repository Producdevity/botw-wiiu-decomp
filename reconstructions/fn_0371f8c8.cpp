extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_03743cd0(void*);

namespace {
struct Object {
    unsigned char padding_0[0x5F0];
    unsigned char lock[1];
};
}

extern "C" void fn_0371f8c8(void *object, void *item) {
    void *lock = ((Object *)object)->lock;
    fn_030bb668(lock);
    fn_03743cd0(item);
    fn_030bb69c(lock);
}
