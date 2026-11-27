typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_101c60a0;

namespace {
struct VtableHolder {
    s32 value;
    s32 *vtable;
};
}

extern "C" void fn_02c4f964(void *storage) {
    VtableHolder *object = (VtableHolder *)storage;
    if (object != 0 || (object = (VtableHolder *)fn_0308e578(8U), object != 0)) {
        object->value = 0;
        object->vtable = &data_101c60a0;
    }
}
