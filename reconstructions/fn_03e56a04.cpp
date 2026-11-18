typedef __vec2x32float__ FloatPair;
extern "C" FloatPair __PS_MERGE00(FloatPair, FloatPair) __attribute__((const));
extern "C" FloatPair __PS_MERGE11(FloatPair, FloatPair) __attribute__((const));

extern "C" void fn_03e56a04(FloatPair* output, const FloatPair* input) {
    const FloatPair input_0 = input[0];
    const FloatPair result_1 = __PS_MERGE00(input_0, input_0);
    output[0] = result_1;
    output[1] = result_1;
    const FloatPair input_0_after_1 = input[0];
    const FloatPair result_2 = __PS_MERGE11(input_0_after_1, input_0_after_1);
    output[2] = result_2;
    output[3] = result_2;
    const FloatPair input_1 = input[1];
    const FloatPair result_3 = __PS_MERGE00(input_1, input_1);
    output[4] = result_3;
    output[5] = result_3;
    const FloatPair input_1_after_1 = input[1];
    const FloatPair result_4 = __PS_MERGE11(input_1_after_1, input_1_after_1);
    output[6] = result_4;
    output[7] = result_4;
}
