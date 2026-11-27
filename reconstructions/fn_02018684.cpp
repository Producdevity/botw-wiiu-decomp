extern "C" void* fn_0308e578(unsigned);

extern "C" int data_10004368;

namespace {
struct Object {
    int *table;
    int value;
};
}

extern "C" void fn_02018684(void *storage, int value) {
    Object *object = (Object *)storage;

    if (object != 0 || (object = (Object *)fn_0308e578(8U), object != 0)) {
        object->value = value;
        object->table = &data_10004368;
    }
}
