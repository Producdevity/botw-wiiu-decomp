extern "C" int fn_02511948(void* object);
extern "C" int fn_033aa78c(void* owner, int value);

namespace {
struct Object {
    void* owner;
    char padding_4[0x9C];
    int value_a0;
};
}

extern "C" int fn_0277373c(void* object)
{
    Object* self = (Object*)object;
    if (fn_033aa78c(self->owner, 0) != 0) {
        return fn_02511948(object);
    }
    return self->value_a0;
}
