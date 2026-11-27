typedef float f32;

namespace {
struct Object {
    void *owner;
    char padding_4[0x14];
    f32 *time;
    char padding_1C[0x88 - 0x1C];
    char state[1];
};
}

extern "C" void fn_02b744a0(void *, float);
extern "C" void fn_03793fcc(void*);
extern "C" void fn_037940ec(void*, float);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_0216701c(void *object) {
    fn_037940ec(((Object *)object)->state, *((Object *)object)->time);
    fn_03793fcc(((Object *)object)->state);
    void *target = fn_037966a8(((Object *)object)->owner);
    if (target != 0) {
        fn_02b744a0(target, *((Object *)object)->time);
    }
}
