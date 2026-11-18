namespace {
struct OutputView {
    unsigned char padding_0[8];
    unsigned field_8;
    unsigned field_c;
    unsigned char field_10;
    unsigned char padding_11[31];
    unsigned char field_30;
    unsigned char padding_31[3];
    unsigned field_34;
    unsigned field_38;
};
}

extern "C" void fn_03cc1888(OutputView* output) {
    output->field_10 = 0u;
    output->field_30 = 0u;
    output->field_38 = 0u;
    output->field_8 = 0u;
    output->field_34 = 0u;
    output->field_c = 0u;
}
