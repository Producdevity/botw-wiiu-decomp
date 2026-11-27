typedef int s32;

extern "C" void fn_0434c638(void*, void*);

namespace {
struct Object {
    char padding_0[0x84];
    s32 state;
    char padding_88[4];
    void *handle;
};
}

extern "C" void fn_030bbd1c(void *object) {
    Object *self;
    s32 state;

    self = (Object *)object;
    state = self->state;
    if ((state != 0) && (state != 4)) {
        fn_0434c638(self->handle, 0);
        self->state = 4;
    }
}
