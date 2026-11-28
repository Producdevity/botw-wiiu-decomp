typedef float f32;

namespace {
struct Extra {
    char padding_0[0x1C];
    f32 value_1c;
};
}

extern "C" void fn_04318a3c(void *object, void *scale, void *extra, void *result) {
    const f32 *input = reinterpret_cast<const f32 *>(object);
    const f32 *factors = reinterpret_cast<const f32 *>(scale);
    f32 *out = reinterpret_cast<f32 *>(result);
    out[0] = input[2] * factors[1];
    out[1] = input[3] * factors[1];
    out[2] = input[1];
    out[3] = input[4];
    out[4] = input[5];
    reinterpret_cast<Extra *>(extra)->value_1c = input[0] * factors[2];
}
