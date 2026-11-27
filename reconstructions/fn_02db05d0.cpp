typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_101e99b0;

namespace {
struct Object {
    s32 value;
    s32 * table;
};
}

extern "C" void fn_02db05d0(void *arg0) {
    Object *object = (Object *)arg0;

    if (object != 0 || (object = (Object *)fn_0308e578(8U), object != 0)) {
        object->value = 0;
        object->table = &data_101e99b0;
    }
}
