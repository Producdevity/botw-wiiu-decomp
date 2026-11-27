typedef int s32;

extern "C" void fn_02c3630c(int, void*);
extern "C" void fn_02c578c8(void*);

namespace {
struct Object {
    char padding_0[8];
    s32 *state;
};
}

extern "C" void fn_02c57b2c(void *object) {
    Object *self;
    s32 *state;

    self = (Object *)object;
    state = self->state;
    if ((state == 0) || (fn_02c578c8(state), (((s32) *self->state == 4) != 0))) {
        fn_02c3630c(1, (void *)1);
    }
}
