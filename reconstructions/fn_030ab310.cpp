extern "C" void fn_030ab290(void *);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
namespace {
struct Object {
    char padding_0[0x54];
    char lock[0x3C];
    unsigned short flags;
};
}

extern "C" void fn_030ab310(void *self) {
    unsigned short *flags = &((Object *)self)->flags;
    int lockedFlag = 1;
    void *lock = 0;
    if (*flags & lockedFlag) {
        lock = ((Object *)self)->lock;
        fn_030bb668(lock);
    }
    fn_030ab290(self);
    if (lock != 0) {
        fn_030bb69c(lock);
    }
}
