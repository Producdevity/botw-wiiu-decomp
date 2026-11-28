extern "C" void fn_0287c558(void*);
struct Binding;
struct Source;
extern "C" void fn_0398863c(Binding *, Source *, const unsigned int *);

namespace {
struct Object {
    char padding_0[0x28];
    float *value_source;
    char key[0x50 - 0x2C];
    Source *source;
    char padding_54[0x58 - 0x54];
    char binding[0x74 - 0x58];
    float value;
};
}

extern "C" void fn_0287c600(void *object) {
    Object *self = (Object *) object;
    fn_0398863c((Binding *) self->binding, self->source, (const unsigned int *) &self->key[0x30 - 0x2C]);
    self->value = *self->value_source;
    fn_0287c558(self);
}
