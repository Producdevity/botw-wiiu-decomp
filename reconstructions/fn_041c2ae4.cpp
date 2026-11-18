typedef __vec2x32float__ FloatPair;
extern "C" FloatPair __PS_MERGE00(FloatPair, FloatPair);
extern "C" FloatPair __PS_MERGE01(FloatPair, FloatPair);
extern "C" FloatPair __PS_MERGE11(FloatPair, FloatPair);

extern "C" void fn_041c2ae4(const FloatPair* input, FloatPair* output) {
    const FloatPair input_0 = input[0];
    const FloatPair output_0 = output[0];
    const FloatPair result_1 = __PS_MERGE00(input_0, input_0);
    const FloatPair result_2 = __PS_MERGE01(result_1, output_0);
    output[0] = result_2;
    const FloatPair input_0_after_1 = input[0];
    const FloatPair output_2 = output[2];
    const FloatPair result_3 = __PS_MERGE11(input_0_after_1, input_0_after_1);
    const FloatPair result_4 = __PS_MERGE00(output_2, result_3);
    output[2] = result_4;
    const FloatPair input_1 = input[1];
    const FloatPair output_5 = output[5];
    const FloatPair result_5 = __PS_MERGE00(input_1, input_1);
    const FloatPair result_6 = __PS_MERGE01(result_5, output_5);
    output[5] = result_6;
}
