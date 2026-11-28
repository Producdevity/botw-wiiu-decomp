typedef int s32;
typedef float f32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_10336abc;
extern "C" f32 data_10336b6c;

namespace {
struct Instance {
    s32 *vtable;
    f32 value;
};
}

extern "C" void fn_038fe598(void *object) {
    Instance *instance;

    instance = (Instance *)object;
    if (instance == 0) {
        instance = (Instance *)fn_0308e578(8U);
    }
    if (instance != 0) {
        instance->vtable = &data_10336abc;
        instance->value = data_10336b6c;
    }
}
