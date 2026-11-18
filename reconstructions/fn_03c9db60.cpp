namespace {
struct OutputView {
    unsigned char padding_0[8];
    unsigned field_8;
    unsigned field_c;
    unsigned char padding_10[32];
    unsigned char field_30;
    unsigned char padding_31[3];
    unsigned field_34;
    unsigned field_38;
    unsigned field_3c;
    unsigned field_40;
};
}

extern "C" void fn_03c9db60(OutputView* output) {
    output->field_3c = 0u;
    output->field_40 = 0u;
    output->field_34 = 0u;
    output->field_30 = 0u;
    output->field_38 = 0u;
    output->field_8 = 0u;
    output->field_c = 0u;
}
