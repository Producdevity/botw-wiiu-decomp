typedef __vec2x32float__ FloatPair;
extern "C" FloatPair __PS_MERGE01(FloatPair, FloatPair) __attribute__((const));

extern "C" void fn_03fd15e8(FloatPair* output, const FloatPair* left, const FloatPair* right) {
    const FloatPair left_0 = left[0];
    const FloatPair right_0 = right[0];
    const FloatPair result_1 = __PS_MERGE01(left_0, right_0);
    output[0] = result_1;
    const FloatPair right_1 = right[1];
    const FloatPair left_1 = left[1];
    const FloatPair result_2 = __PS_MERGE01(right_1, left_1);
    output[1] = result_2;
}
