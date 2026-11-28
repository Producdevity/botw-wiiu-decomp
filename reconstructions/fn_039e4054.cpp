typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_10353c34;

namespace {
struct Object {
    s32 value;
    char padding_4[0x100];
    s32 * table;
};
}

extern "C" void fn_039e4054(void *memory) {
    Object *object = (Object *)memory;

    if (object != 0 || (object = (Object *)fn_0308e578(0x108U), object != 0)) {
        object->value = 0;
        object->table = &data_10353c34;
    }
}
