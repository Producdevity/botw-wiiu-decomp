typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_0223174c(void*);
extern "C" float fn_03c6fcf0(const float *);

namespace {
struct Object {
    s32 base;
    char padding_4[7];
    u8 flags;
    char padding_c[0x28];
    f32 scale_x;
    f32 scale_y;
};
}

extern "C" void fn_02204850(void *arg0) {
    Object *object = (Object *)arg0;
    f32 scale;

    fn_0223174c(object);
    scale = fn_03c6fcf0((const float *)(object->base + 0x25C));
    object->scale_x = scale;
    object->scale_y = scale;
    object->flags = object->flags | 4;
}
