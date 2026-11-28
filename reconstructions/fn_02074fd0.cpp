extern "C" void fn_02074c58(void*);
extern "C" void fn_02074d90(void*, void*, float);

extern "C" float data_1000c968;

namespace {
struct Source {
    float* value;
};

struct Object {
    char padding_0[0x18];
    float* source;
    char padding_1c[0x670 - 0x1C];
    char state[0x3C];
    float value_6ac;
};
}

extern "C" void fn_02074fd0(void *object) {
    Object *self = (Object *) object;
    fn_02074c58(self);
    fn_02074d90(self, self->state, data_1000c968);
    self->value_6ac = *self->source;
}
