typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_10218724;

namespace {
struct Object {
    s32 value;
    s32 * table;
};
}

extern "C" void fn_02e86260(void *arg0) {
    Object *object = (Object *)arg0;

    if (object != 0 || (object = (Object *)fn_0308e578(8U), object != 0)) {
        object->value = 0;
        object->table = &data_10218724;
    }
}
