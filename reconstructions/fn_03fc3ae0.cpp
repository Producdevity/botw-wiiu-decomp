typedef int s32;
typedef float f32;

namespace {
struct Object {
    s32 id;
    f32 value;
};
}

extern "C" void* fn_0308e578(unsigned);

extern "C" f32 data_103ffd74;

extern "C" void fn_03fc3ae0(void *self, s32 id) {
    Object *object = (Object *)self;
    if (object != 0 || (object = (Object *)fn_0308e578(8U), object != 0)) {
        object->id = id;
        object->value = data_103ffd74;
    }
}
