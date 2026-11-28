extern "C" void *fn_0308e578(unsigned size);

namespace {
struct Object {
    int value;
    int value_4;
    int value_8;
    int value_c;
};
}

extern "C" void fn_0399be4c(void *object, int value)
{
    void *self = object;
    if (self != 0 || (self = fn_0308e578(0x10)) != 0) {
        Object *fields = (Object *)self;
        fields->value = value;
        fields->value_8 = 0;
        fields->value_c = 0;
    }
}
