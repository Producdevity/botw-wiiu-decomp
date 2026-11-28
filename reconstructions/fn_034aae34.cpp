typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_102cb6c8;

namespace {
struct Object {
    s32 value;
    s32 * table;
};
}

extern "C" void fn_034aae34(void *storage, s32 value) {
    Object *object = (Object *)storage;

    if (object != 0 || (object = (Object *)fn_0308e578(8U), object != 0)) {
        object->value = value;
        object->table = &data_102cb6c8;
    }
}
