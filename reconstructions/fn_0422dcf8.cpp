typedef __vec2x32float__ FloatPair;
extern "C" FloatPair __PS_MERGE00(FloatPair, FloatPair) __attribute__((const));
extern "C" FloatPair __PS_MERGE11(FloatPair, FloatPair) __attribute__((const));

extern "C" void fn_0422dcf8(FloatPair* output, const FloatPair* input) {
    const FloatPair input_0 = input[0];
    output[0] = __PS_MERGE00(input_0, input_0);
    const FloatPair input_0_after_1 = input[0];
    output[1] = __PS_MERGE11(input_0_after_1, input_0_after_1);
    const FloatPair input_1 = input[1];
    output[2] = __PS_MERGE00(input_1, input_1);
    const FloatPair input_1_after_1 = input[1];
    output[3] = __PS_MERGE11(input_1_after_1, input_1_after_1);
}
