typedef int s32;

extern "C" int fn_02a0855c(void*, void*);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" bool fn_0378da88(void *);

namespace {
struct Object {
    char padding_0[0x1C];
    char lock[0x268];
    char state[0xC];
    void *target;
};
}

extern "C" s32 fn_02a0f604(void *object, void *argument) {
    s32 result;
    void *lock;
    void *target;

    lock = ((Object *)object)->lock;
    fn_030bb668(lock);
    if (fn_0378da88(((Object *)object)->state) != 0) {
        target = ((Object *)object)->target;
        if (target != 0) {
            result = fn_02a0855c(target, argument);
            fn_030bb69c(lock);
            return result;
        }
    }
    fn_030bb69c(lock);
    return 0;
}
