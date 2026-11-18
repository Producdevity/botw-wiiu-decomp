namespace {
struct OutputView {
    unsigned char padding_0[16];
    unsigned field_10;
    unsigned field_14;
    unsigned field_18;
    unsigned field_1c;
    unsigned char field_20;
};
}

extern "C" void fn_03ba26a8(OutputView* output) {
    output->field_20 = 0u;
    output->field_18 = 0u;
    output->field_1c = 0u;
    output->field_14 = 0u;
    output->field_10 = 0u;
}
