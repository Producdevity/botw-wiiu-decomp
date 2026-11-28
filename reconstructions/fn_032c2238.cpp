typedef int s32;
typedef float f32;

extern "C" void fn_032c2130(void*);

namespace {
struct Source {
    char padding_0[0x204];
    f32 x;
    char padding_208[0xC];
    f32 y;
    char padding_218[0xC];
    f32 z;
};
struct Object {
    Source *source;
    char padding_4[0x30];
    f32 x;
    f32 y;
    f32 z;
    char padding_40[0xC];
    s32 state;
};
}

extern "C" void fn_032c2238(void *instance) {
    Object *object = (Object *)instance;
    Source *source = object->source;

    object->x = source->x;
    object->y = source->y;
    object->z = source->z;
    fn_032c2130(object);
    object->state = 0;
}
