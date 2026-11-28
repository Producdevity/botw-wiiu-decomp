typedef signed char s8;

extern "C" void fn_0211bd20(void*);
extern "C" void fn_0344bac4(void *);
extern "C" void* fn_037966a8(void *);

namespace {
struct Object {
    void *handle;
    char padding_4[0xD0];
    s8 flag;
};
}

extern "C" void fn_0208bc3c(void *object) {
    Object *self = (Object *)object;
    void *target;

    fn_0211bd20(self);
    self->flag = 0;
    target = fn_037966a8(self->handle);
    if (target != 0) {
        fn_0344bac4(target);
    }
}
