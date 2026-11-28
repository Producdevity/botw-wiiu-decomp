typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_102a3140;

namespace {
struct Object {
    s32 * table;
    s32 value;
};
}

extern "C" void fn_0329ddd8(void *storage) {
    Object *object = (Object *)storage;

    if (object != 0 || (object = (Object *)fn_0308e578(8U), object != 0)) {
        object->value = 0;
        object->table = &data_102a3140;
    }
}
