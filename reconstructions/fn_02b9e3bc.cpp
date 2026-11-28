typedef float f32;

extern "C" void fn_02b9e1fc(void*);
extern "C" void fn_02b9e270(void *);
extern "C" void fn_02b9e358(void*);

extern "C" f32 data_101b3690;

namespace {
struct Object {
    char padding_0[0x40];
    f32 value_40;
    char padding_44[0x8C];
    char member_d0[1];
    signed char value_d1;
};
}

extern "C" void fn_02b9e3bc(void *object) {
    fn_02b9e1fc(object);
    fn_02b9e270(static_cast<Object *>(object)->member_d0);
    static_cast<Object *>(object)->value_d1 = 3;
    fn_02b9e358(object);
    static_cast<Object *>(object)->value_40 = data_101b3690;
}
