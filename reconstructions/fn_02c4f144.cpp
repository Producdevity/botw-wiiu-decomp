extern "C" void* fn_0308e578(unsigned);

extern "C" int data_101c6014;

namespace {
struct Object {
    int* table;
    void* owner;
};
}

extern "C" void fn_02c4f144(int storage, void* owner) {
    Object* object = (Object*)storage;

    if (object != 0 || (object = (Object*)fn_0308e578(8U), object != 0)) {
        object->owner = owner;
        object->table = &data_101c6014;
    }
}
