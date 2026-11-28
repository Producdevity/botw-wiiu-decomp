extern "C" void *fn_0308e578(unsigned size);
extern "C" int data_102cafac;

namespace {
struct Object {
    int value;
    int value_4;
    int value_8;
    int *table;
};
}

extern "C" void fn_0349ebac(void *self, int value)
{
    if (self != 0 || (self = fn_0308e578(0x10)) != 0) {
        Object *object = (Object *)self;
        object->value = value;
        object->table = &data_102cafac;
        object->value_4 = 0;
        object->value_8 = 0;
    }
}
