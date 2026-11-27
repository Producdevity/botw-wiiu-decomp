typedef int s32;
typedef float f32;

namespace {
struct Object {
    void *owner;
    char padding_4[0x50];
    f32 savedTime;
};
}

extern "C" void fn_021d7ec4(int);
extern "C" void fn_0344a37c(void*, float);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_021d919c(s32 self) {
    Object *object = (Object *)self;
    fn_021d7ec4(self);
    void *state = fn_037966a8(object->owner);
    if (state != 0) {
        fn_0344a37c(state, object->savedTime);
    }
}
