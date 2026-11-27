typedef int s32;
typedef float f32;

extern "C" void* fn_02c0378c(void* holder);

namespace {
struct Source {
    unsigned char padding_0[0x9A8];
    f32 x;
    f32 y;
    f32 z;
};

struct Object {
    unsigned char padding_0[0x10];
    unsigned char holder[0x40];
    f32 x;
    f32 y;
    f32 z;
};
}

extern "C" void fn_02b9e27c(void *object_ptr, void *unused) {
    Object *object = (Object *)object_ptr;
    Source *source = (Source *)fn_02c0378c(object->holder);
    if (source != 0) {
        object->x = source->x;
        object->y = source->y;
        object->z = source->z;
    }
}
