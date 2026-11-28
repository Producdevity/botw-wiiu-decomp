extern "C" void *fn_0308e578(unsigned size);
extern "C" int data_10007e74;

namespace {
struct Object {
    int value;
    int *table;
    int value_8;
    int value_c;
};
}

extern "C" void fn_0203e3c8(void *self, int value)
{
    if (self != 0 || (self = fn_0308e578(0x10)) != 0) {
        Object *object = (Object *)self;
        object->value = value;
        object->table = &data_10007e74;
        object->value_8 = 0;
        object->value_c = 0;
    }
}
