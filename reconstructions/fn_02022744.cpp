typedef float f32;

extern "C" void fn_02022744(void *result, void *matrix, void *scale) {
    f32 *out = reinterpret_cast<f32 *>(result);
    const f32 *in = reinterpret_cast<const f32 *>(matrix);
    const f32 *factors = reinterpret_cast<const f32 *>(scale);
    out[0] = in[0] * factors[0];
    out[4] = in[4] * factors[0];
    out[8] = in[8] * factors[0];
    out[1] = in[1] * factors[1];
    out[5] = in[5] * factors[1];
    out[9] = in[9] * factors[1];
    out[2] = in[2] * factors[2];
    out[6] = in[6] * factors[2];
    out[10] = in[10] * factors[2];
    out[3] = in[3];
    out[7] = in[7];
    out[11] = in[11];
}
