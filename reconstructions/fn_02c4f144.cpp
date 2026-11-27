typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_101c6014;

namespace {
struct Object {
    s32 *table;
    void *owner;
};
}

extern "C" void fn_02c4f144(s32 arg0, void *arg1) {
    Object *object = (Object *)arg0;

    if (object != 0 || (object = (Object *)fn_0308e578(8U), object != 0)) {
        object->owner = arg1;
        object->table = &data_101c6014;
    }
}
