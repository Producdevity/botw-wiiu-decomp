typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_102ed448;

namespace {
struct Object {
    char padding_0[0x10];
    s32 value;
    s32 * table;
};
}

extern "C" void fn_035d5cdc(void *arg0) {
    Object *object = (Object *)arg0;

    if (object != 0 || (object = (Object *)fn_0308e578(0x18U), object != 0)) {
        object->value = 0;
        object->table = &data_102ed448;
    }
}
