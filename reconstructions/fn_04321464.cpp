typedef __vec2x32float__ FloatPair;
extern "C" FloatPair __PS_ADD(FloatPair, FloatPair) __attribute__((const));

extern "C" FloatPair* fn_04321464(FloatPair* output, const FloatPair* left, const FloatPair* right) {
    const FloatPair left_0 = left[0];
    const FloatPair right_0 = right[0];
    const FloatPair left_1 = left[1];
    const FloatPair sum_2 = __PS_ADD(left_1, right_0);
    output[0] = __PS_ADD(left_0, right_0);
    output[1] = sum_2;
    return output;
}
