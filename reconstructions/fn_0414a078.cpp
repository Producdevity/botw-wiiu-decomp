typedef __vec2x32float__ FloatPair;
extern "C" FloatPair __PS_MULS0(FloatPair, FloatPair) __attribute__((const));

extern "C" FloatPair* fn_0414a078(FloatPair* output, const FloatPair* left, const FloatPair* right) {
    const FloatPair left_0 = left[0];
    const FloatPair right_0 = right[0];
    const FloatPair left_1 = left[1];
    const FloatPair product_2 = __PS_MULS0(left_1, right_0);
    output[0] = __PS_MULS0(left_0, right_0);
    output[1] = product_2;
    return output;
}
