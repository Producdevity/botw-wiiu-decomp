typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_1035d86c;

namespace {
struct Object {
    s32 * table;
    s32 value;
};
}

extern "C" void fn_03a3e184(void *arg0, s32 arg1) {
    Object *object = (Object *)arg0;

    if (object != 0 || (object = (Object *)fn_0308e578(8U), object != 0)) {
        object->value = arg1;
        object->table = &data_1035d86c;
    }
}
