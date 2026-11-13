namespace {
struct InferredInput {
    __vec2x32float__ field_0;
    float field_8;
};
struct InferredOutput {
    __vec2x32float__ field_0;
    float field_8;
};
}

extern "C" void fn_03d1107c(const InferredInput* input, InferredOutput* output) {
    output->field_0 = input->field_0;
    output->field_8 = input->field_8;
}
