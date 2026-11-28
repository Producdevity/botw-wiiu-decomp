extern "C" void *fn_0308e578(unsigned size);
extern "C" int data_10325038;

namespace {
struct Object {
    int *table;
    int value;
    int value_8;
    int value_c;
};
}

extern "C" void fn_03839618(void *self, int value)
{
    if (self != 0 || (self = fn_0308e578(0x10)) != 0) {
        Object *object = (Object *)self;
        object->value = value;
        object->table = &data_10325038;
        object->value_8 = 0;
        object->value_c = 0;
    }
}
