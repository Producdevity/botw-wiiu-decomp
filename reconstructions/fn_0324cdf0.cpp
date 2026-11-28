typedef float f32;

namespace {
struct Target {
    char padding_0[8];
    f32 values[12];
};
}

extern "C" void fn_0324cdf0(void *object, void *source) {
    const f32 *input = reinterpret_cast<const f32 *>(source);
    Target *target = reinterpret_cast<Target *>(object);
    target->values[0] = input[0];
    target->values[1] = input[1];
    target->values[2] = input[2];
    target->values[3] = input[3];
    target->values[4] = input[4];
    target->values[5] = input[5];
    target->values[6] = input[6];
    target->values[7] = input[7];
    target->values[8] = input[8];
    target->values[9] = input[9];
    target->values[10] = input[10];
    target->values[11] = input[11];
}
