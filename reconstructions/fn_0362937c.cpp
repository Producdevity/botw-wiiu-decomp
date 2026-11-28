typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_102fd404;

namespace {
struct Object {
    s32 value;
    s32 * table;
};
}

extern "C" void fn_0362937c(void *memory, s32 value) {
    Object *object = (Object *)memory;

    if (object != 0 || (object = (Object *)fn_0308e578(8U), object != 0)) {
        object->value = value;
        object->table = &data_102fd404;
    }
}
