typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_101ae840;

namespace {
struct Object {
    s32 *vtable;
    s32 value;
};
}

extern "C" void fn_02b46d10(void *storage) {
    Object *object = (Object *)storage;
    if ((object != 0) || ((object = (Object *)fn_0308e578(8U)) != 0)) {
        object->value = 0;
        object->vtable = &data_101ae840;
    }
}
