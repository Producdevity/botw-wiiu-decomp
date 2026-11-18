namespace {
struct OutputView {
    unsigned char padding_0[8];
    unsigned field_8;
    unsigned field_c;
    unsigned char padding_10[32];
    unsigned char field_30;
    unsigned char padding_31[3];
    unsigned field_34;
    unsigned char padding_38[400];
    unsigned field_1c8;
};
}

extern "C" void fn_03cc4000(OutputView* output) {
    output->field_1c8 = 0u;
    output->field_8 = 0u;
    output->field_c = 0u;
    output->field_34 = 0u;
    output->field_30 = 0u;
}
