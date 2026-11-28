typedef unsigned short u16;

extern "C" void fn_030a9714(void*, void*, void*);
extern "C" void fn_030a980c(void*, void*);
extern "C" void fn_030aa208(void*);
extern "C" void fn_030aa2c8(void*);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    char padding_0[0x24];
    void *handler;
    char padding_28[0x2C];
    char lock[0x3C];
    u16 flags;
};
}

extern "C" void fn_030a98a8(void *object) {
    void *handler;
    void *lock = 0;
    if (((Object *)object)->flags & 1) {
        lock = ((Object *)object)->lock;
        fn_030bb668(lock);
    }
    fn_030a9714(object, 0, 0);
    fn_030aa2c8(object);
    handler = ((Object *)object)->handler;
    if (handler != 0) {
        fn_030a980c(handler, object);
        if (lock == 0) {
            return;
        }
    } else {
        fn_030aa208(object);
        if (lock == 0) {
            return;
        }
    }
    fn_030bb69c(lock);
}
