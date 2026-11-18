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
    unsigned char padding_3c[4];
    unsigned field_40;
    unsigned field_44;
    unsigned field_48;
    unsigned field_4c;
    unsigned field_50;
    unsigned field_54;
    unsigned char field_58;
    unsigned char field_59;
    unsigned char field_5a;
};
}

extern "C" void fn_03cbd59c(OutputView* output) {
    output->field_c = 0u;
    output->field_59 = 0u;
    output->field_30 = 0u;
    output->field_40 = 0u;
    output->field_48 = 0u;
    output->field_4c = 0u;
    output->field_34 = 0u;
    output->field_50 = 0u;
    output->field_54 = 0u;
    output->field_38 = 0u;
    output->field_5a = 0u;
    output->field_58 = 0u;
    output->field_44 = 0u;
    output->field_8 = 0u;
}
