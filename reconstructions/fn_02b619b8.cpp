typedef int s32;
typedef float f32;

extern "C" void fn_02b614e0(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" f32 data_101afcb0;

namespace {
struct Object {
    char padding_0[8];
    f32 value;
    s32 count;
};
}

extern "C" void *fn_02b619b8(void *memory) {
    Object *object = (Object *)memory;

    if ((object != 0) || (object = (Object *)fn_0308e578(0x10U), object != 0)) {
        fn_02b614e0(object);
        object->count = 0;
        object->value = data_101afcb0;
    }
    return object;
}
