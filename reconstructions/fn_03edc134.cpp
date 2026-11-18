typedef __vec2x32float__ FloatPair;
extern "C" FloatPair __PS_MERGE01(FloatPair, FloatPair);

extern "C" void fn_03edc134(FloatPair* output, const FloatPair* left, const FloatPair* right, const FloatPair* factor) {
    const FloatPair left_0 = left[0];
    output[4] = left_0;
    const FloatPair left_1 = left[1];
    output[5] = left_1;
    const FloatPair right_0 = right[0];
    output[6] = right_0;
    const FloatPair right_1 = right[1];
    output[7] = right_1;
    const FloatPair factor_0 = factor[0];
    const FloatPair output_17 = output[17];
    output[16] = factor_0;
    const FloatPair factor_1 = factor[1];
    output[17] = __PS_MERGE01(factor_1, output_17);
}
