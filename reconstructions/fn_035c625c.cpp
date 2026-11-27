typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_102e9bc8;

namespace {
struct Object {
    s32 *vtable;
    s32 first;
    s32 second;
};
}

extern "C" void fn_035c625c(void *memory, s32 first, s32 second) {
    Object *object = (Object *)memory;

    if ((object != 0) || (object = (Object *)fn_0308e578(0xCU), ((object == 0) == 0))) {
        object->second = second;
        object->first = first;
        object->vtable = &data_102e9bc8;
    }
}
