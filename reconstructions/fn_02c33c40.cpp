typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_101c1764;

namespace {
struct VtableHolder {
    s32 *vtable;
    s32 value;
};
}

extern "C" void fn_02c33c40(void *storage, s32 value) {
    VtableHolder *object = (VtableHolder *)storage;
    if (object != 0 || (object = (VtableHolder *)fn_0308e578(8U), object != 0)) {
        object->value = value;
        object->vtable = &data_101c1764;
    }
}
