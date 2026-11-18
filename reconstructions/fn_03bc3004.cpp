namespace {
struct OutputView {
    unsigned char padding_0[4];
    float field_4;
    float field_8;
    float field_c;
    unsigned field_10;
    unsigned char padding_14[24];
    unsigned field_2c;
};
struct InputView {
    float field_0;
    float field_4;
    float field_8;
    unsigned field_c;
};
}

extern "C" void fn_03bc3004(OutputView* output, const InputView* input) {
    output->field_4 = input->field_0;
    output->field_8 = input->field_4;
    output->field_c = input->field_8;
    const unsigned input_c = input->field_c;
    output->field_10 = input_c;
    output->field_2c = input_c;
}
