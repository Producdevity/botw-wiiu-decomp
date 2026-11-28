typedef unsigned short u16;

struct IntrusiveList;
extern "C" void fn_0308e9e8(IntrusiveList *);
extern "C" void fn_030a5c78(void*);
extern "C" void fn_030a9714(void*, void*, void*);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    char padding_0[0x54];
    char lock[0x3C];
    u16 flags;
    char padding_92[6];
    char outerList[0x10];
    char innerList[0x10];
};
}

extern "C" void fn_030a7d30(void *object) {
    void *lock = 0;
    if (((Object *)object)->flags & 1) {
        lock = ((Object *)object)->lock;
        fn_030bb668(lock);
    }
    fn_030a9714(object, 0, 0);
    fn_0308e9e8((IntrusiveList *)((Object *)object)->innerList);
    fn_0308e9e8((IntrusiveList *)((Object *)object)->outerList);
    fn_030a5c78(object);
    if (lock != 0) {
        fn_030bb69c(lock);
    }
}
