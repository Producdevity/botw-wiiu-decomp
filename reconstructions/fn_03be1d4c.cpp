extern "C" void fn_0308e808(struct ListLink *);
extern "C" int fn_0308e978(void*, int);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Owner {
    char padding_0[0x6C];
    char list;
    char padding_6d[7];
    int count;
    int linkOffset;
    char lock;
};
}

extern "C" void fn_03be1d4c(void *object, void *node) {
    void *lock;
    if (node != 0) {
        lock = &((Owner*)object)->lock;
        fn_030bb668(lock);
        if (fn_0308e978(&((Owner*)object)->list, (int)((char *)node + ((Owner*)object)->linkOffset)) >= 0) {
            fn_0308e808((ListLink *)((char *)node + ((Owner*)object)->linkOffset));
            ((Owner*)object)->count -= 1;
        }
        fn_030bb69c(lock);
    }
}
