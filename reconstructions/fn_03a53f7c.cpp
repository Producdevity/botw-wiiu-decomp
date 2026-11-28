extern "C" void fn_0308eacc(void*, int, void*, int);

namespace {
struct Object {
    char padding_0[0x50];
    int value;
};
}

extern "C" void fn_03a53f7c(void* object, void* context)
{
    Object* self = (Object*)object;
    fn_0308eacc(&self->value, 0x1000, context, 4);
    self->value = 0;
}
