typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_1033ec1c;

namespace {
struct Object {
    s32 * table;
    s32 value;
};
}

extern "C" void fn_0393ebbc(void *memory, s32 value) {
    Object *object = (Object *)memory;

    if (object != 0 || (object = (Object *)fn_0308e578(8U), object != 0)) {
        object->value = value;
        object->table = &data_1033ec1c;
    }
}
