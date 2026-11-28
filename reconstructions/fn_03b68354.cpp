typedef unsigned char u8;
typedef float f32;

extern "C" void fn_03b68268(void*, int, int, int);
extern "C" void fn_03b68320(void*, float, float);

namespace {
struct Settings {
    char padding_0[8];
    u8 value_8;
    u8 value_9;
    u8 value_a;
    char padding_b[1];
    f32 value_c;
    f32 value_10;
};
}

extern "C" void fn_03b68354(void *object, void *settings) {
    fn_03b68268(object, ((Settings *) settings)->value_a, ((Settings *) settings)->value_8, ((Settings *) settings)->value_9);
    fn_03b68320(object, ((Settings *) settings)->value_c, ((Settings *) settings)->value_10);
}
