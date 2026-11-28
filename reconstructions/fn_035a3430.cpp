typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03a4d6dc(void *);

namespace {
struct Object {
    char padding_0[4];
    s32 count;
    s32 list;
    char padding_c[8];
    void *buffer;
};
}

extern "C" void fn_035a3430(void *object) {
    Object *self = (Object *)object;

    void *buffer = self->buffer;
    if (buffer != 0) {
        fn_0308e6d0(buffer);
        self->buffer = 0;
    }
    if (self->list != 0) {
        fn_03a4d6dc(&self->list);
    }
    self->count = 0;
}
