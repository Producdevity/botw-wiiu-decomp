typedef float f32;

namespace {
struct Target {
    char padding_0[8];
    f32 values[9];
};
}

extern "C" void fn_0324c9e0(void *object, void *source) {
    f32 *input = reinterpret_cast<f32 *>(source);
    Target *target = reinterpret_cast<Target *>(object);
    for (int i = 0; i < 9; ++i) target->values[i] = input[i];
}
