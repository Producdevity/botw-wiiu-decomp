typedef int s32;

extern "C" void fn_0308ee24(void*);
extern "C" void fn_0309f83c(void*, void*);
extern "C" void fn_0309f8ac(void*);
extern "C" void fn_0309f8bc(void*);

namespace {
struct Object {
    char padding_0[0x3C];
    s32 state;
};
}

extern "C" void fn_0309f8cc(void *object) {
    Object *self = (Object *)object;
    s32 savedState = self->state;

    fn_0309f83c(object, 0);
    self->state = savedState;
    fn_0309f8ac(object);
    fn_0308ee24(object);
    fn_0309f8bc(object);
    self->state = 0;
}
