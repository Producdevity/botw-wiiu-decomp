namespace {
struct InferredInput {
    float field_0;
    float field_4;
    unsigned char padding_8[8];
    __vec2x32float__ field_10;
    __vec2x32float__ field_18;
    __vec2x32float__ field_20;
    __vec2x32float__ field_28;
    __vec2x32float__ field_30;
    __vec2x32float__ field_38;
    __vec2x32float__ field_40;
    __vec2x32float__ field_48;
};
struct InferredOutput {
    float field_0;
    float field_4;
    unsigned char padding_8[8];
    __vec2x32float__ field_10;
    __vec2x32float__ field_18;
    __vec2x32float__ field_20;
    __vec2x32float__ field_28;
    __vec2x32float__ field_30;
    __vec2x32float__ field_38;
    __vec2x32float__ field_40;
    __vec2x32float__ field_48;
};
}

extern "C" void fn_0415f5e4(InferredOutput* output, const InferredInput* input) {
    output->field_0 = input->field_0;
    output->field_4 = input->field_4;
    output->field_10 = input->field_10;
    output->field_18 = input->field_18;
    output->field_20 = input->field_20;
    output->field_28 = input->field_28;
    output->field_30 = input->field_30;
    output->field_38 = input->field_38;
    output->field_40 = input->field_40;
    output->field_48 = input->field_48;
}
