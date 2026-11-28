extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_102c8a5c;

namespace {
struct Object {
    const void *value;
    int value_4;
    int value_8;
    int *table;
};
}

extern "C" void* fn_034619f0(void* self, const void* value)
{
    if (self != 0 || (self = fn_0308e578(0x10)) != 0) {
        ((Object *) self)->value = value;
        ((Object *) self)->table = &data_102c8a5c;
        ((Object *) self)->value_4 = 0;
        ((Object *) self)->value_8 = 0;
    }
    return self;
}
