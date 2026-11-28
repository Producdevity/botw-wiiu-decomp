typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" f32 data_101abb58;
extern "C" f32 data_101abb5c;

namespace {
struct Object {
    char padding_0[4];
    s32 count;
    char padding_8[0x28];
    f32 output;
    f32 input;
    char padding_38[0x10];
    u8 enabled;
};
}

extern "C" void fn_02b1b288(void *object) {
    Object *self = reinterpret_cast<Object *>(object);
    if (self->enabled != 0 && self->count > 3) {
        self->output = self->input * data_101abb58;
        return;
    }
    self->output = self->input * data_101abb5c;
}
