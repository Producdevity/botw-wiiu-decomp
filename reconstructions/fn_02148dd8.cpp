typedef int s32;

extern "C" void fn_02148dac(void *);
extern "C" void fn_02148dbc(void);
extern "C" void fn_02daa580(void*, void*, void*);
extern "C" void fn_030ea2cc(void *);

extern "C" void *data_10463fe8;

namespace {
struct Object {
    char padding_0[0x18];
    s32 value;
    void *argument;
};
}

extern "C" void fn_02148dd8(void *object) {
    s32 value;
    Object *self = reinterpret_cast<Object *>(object);

    fn_030ea2cc(object);
    fn_02148dac(object);
    fn_02148dbc();
    if (data_10463fe8 != 0) {
        value = self->value;
        fn_02daa580(data_10463fe8, &value, self->argument);
    }
}
