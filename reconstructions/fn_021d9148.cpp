typedef float f32;

namespace {
struct Object {
    void *owner;
    char padding_4[0x4C];
    f32 *time;
    f32 savedTime;
};

struct TimedState {
    char padding_0[0xE0];
    f32 time;
};
}

extern "C" void fn_021d7df4(void*);
extern "C" void fn_0344a37c(void*, float);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_021d9148(void *self) {
    Object *object = (Object *)self;
    fn_021d7df4(self);
    TimedState *state = (TimedState *)fn_037966a8(object->owner);
    if (state != 0) {
        object->savedTime = state->time;
        fn_0344a37c(state, *object->time);
    }
}
