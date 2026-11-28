typedef signed char s8;
typedef int s32;
typedef float f32;

namespace {
struct Object {
    s32 id;
    char padding_4[0x30];
    s8 flag;
};

struct Target {
    char padding_0[0x6C];
    f32 current;
    f32 previous;
};
}

extern "C" void fn_02950880(int);
extern "C" void* fn_02b757a8(int);

extern "C" void fn_0288dfec(void *self) {
    Object *object = (Object *)self;
    object->flag = 0;
    fn_02950880(object->id);
    Target *target = (Target *)fn_02b757a8(object->id);
    if (target != 0) {
        target->previous = target->current;
    }
}
