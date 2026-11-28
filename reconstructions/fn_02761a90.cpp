extern "C" void fn_0378da14(void* handle);

namespace {
struct Handler {
    void *padding_0[7];
    int (*callback)(void *);
};

struct Object {
    char padding_0[0x20];
    signed char flag_20;
    char padding_21[0x28 - 0x21];
    char handle[0x44 - 0x28];
    signed char flag_44;
    char padding_45[0x48 - 0x45];
    Handler *handler;
};
}

extern "C" void fn_02761a90(void *object, void *unused) {
    Object *self = (Object *) object;
    self->flag_44 = 0;
    fn_0378da14(self->handle);
    self->handler->callback(self->handle);
    self->flag_20 = 0;
}
