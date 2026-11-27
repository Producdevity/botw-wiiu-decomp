typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_103dba70;

namespace {
struct LargeVtableHolder {
    s32 value;
    unsigned char padding_4[0x204];
    s32 *vtable;
};
}

extern "C" void fn_03c14b58(void *storage) {
    LargeVtableHolder *object = (LargeVtableHolder *)storage;
    if (object != 0 || (object = (LargeVtableHolder *)fn_0308e578(0x20CU), object != 0)) {
        object->value = 0;
        object->vtable = &data_103dba70;
    }
}
