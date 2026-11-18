namespace {
struct OutputView {
    unsigned char padding_0[436];
    unsigned field_1b4;
    unsigned char field_1b8;
    unsigned char field_1b9;
    unsigned char padding_1ba[578];
    unsigned field_3fc;
    unsigned char padding_400[12];
    unsigned char field_40c;
    unsigned char padding_40d[15];
    unsigned char field_41c;
};
}

extern "C" void fn_03a60108(OutputView* output) {
    const unsigned output_3fc = output->field_3fc;
    const unsigned char output_40c = output->field_40c;
    output->field_1b4 = output_3fc;
    const unsigned char output_41c = output->field_41c;
    output->field_1b8 = output_40c;
    output->field_1b9 = output_41c;
}
