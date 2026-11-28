extern "C" void* fn_0308e578(unsigned);

extern "C" int data_101e99b0;

namespace {
struct Object {
    int value;
    int* table;
};
}

extern "C" void fn_02db05d0(void* storage) {
    Object* object = (Object*)storage;

    if (object != 0 || (object = (Object*)fn_0308e578(8U), object != 0)) {
        object->value = 0;
        object->table = &data_101e99b0;
    }
}
