typedef unsigned char u8;
typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" int fn_030c66dc(void*, void*, void*, void*, void*);
extern "C" void fn_030c77d0(void*);
extern "C" void fn_03c1942c(void *);
extern "C" unsigned char fn_03c2dabc(void);

namespace {
struct Object {
    char padding_0[4];
    char member[0x178];
    void *handler;
    char padding_180[4];
    char lock[0x3C];
    u8 locked;
};
}

extern "C" void fn_030c6c88(void *object, void *first, void *second, void *third, void *fourth) {
    if ((fn_030c66dc(object, first, second, third, fourth) != 0) && (fn_03c2dabc() != 0)) {
        if ((s32)((Object *)object)->locked != 0) {
            void *lock = ((Object *)object)->lock;
            fn_030bb668(lock);
            fn_03c1942c(((Object *)object)->member);
            fn_030bb69c(lock);
        } else {
            fn_03c1942c(((Object *)object)->member);
        }
        if (((Object *)object)->handler != 0) {
            fn_030c77d0(((Object *)object)->handler);
        }
    }
}
