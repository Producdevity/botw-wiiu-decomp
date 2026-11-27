typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_1027ed70;

namespace {
struct VtableHolder {
    s32 *vtable;
    s32 value;
};
}

extern "C" void fn_0310ae80(void *storage, s32 value) {
    VtableHolder *object = (VtableHolder *)storage;
    if (object != 0 || (object = (VtableHolder *)fn_0308e578(8U), object != 0)) {
        object->value = value;
        object->vtable = &data_1027ed70;
    }
}
