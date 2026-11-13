namespace {
struct InferredInput {
    __vec2x32float__ field_0;
    __vec2x32float__ field_8;
    __vec2x32float__ field_10;
    __vec2x32float__ field_18;
    unsigned int field_20;
};
struct InferredOutput {
    __vec2x32float__ field_0;
    __vec2x32float__ field_8;
    __vec2x32float__ field_10;
    __vec2x32float__ field_18;
    unsigned int field_20;
};
}

extern "C" void fn_03ea7fc8(InferredOutput* output, const InferredInput* input) {
    output->field_0 = input->field_0;
    output->field_8 = input->field_8;
    output->field_10 = input->field_10;
    output->field_18 = input->field_18;
    output->field_20 = input->field_20;
}
