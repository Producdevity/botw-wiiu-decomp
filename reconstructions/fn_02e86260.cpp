extern "C" void* fn_0308e578(unsigned);

extern "C" int data_10218724;

namespace {
struct Object {
    int value;
    int* table;
};
}

extern "C" void fn_02e86260(void* storage) {
    Object* object = (Object*)storage;

    if (object != 0 || (object = (Object*)fn_0308e578(8U), object != 0)) {
        object->value = 0;
        object->table = &data_10218724;
    }
}
