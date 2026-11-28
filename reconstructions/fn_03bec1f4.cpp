typedef int s32;
typedef float f32;

extern "C" void* fn_0308e578(unsigned);
extern "C" float data_103d0438;

extern "C" s32 data_103d0428;

namespace {
struct Instance {
    f32 value;
    s32 *vtable;
};
}

extern "C" void fn_03bec1f4(void *object) {
    Instance *instance;

    instance = (Instance *)object;
    if (instance == 0) {
        instance = (Instance *)fn_0308e578(8U);
    }
    if (instance != 0) {
        instance->vtable = &data_103d0428;
        instance->value = data_103d0438;
    }
}
