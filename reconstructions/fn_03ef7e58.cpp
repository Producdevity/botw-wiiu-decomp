namespace {
struct OutputView {
    unsigned char padding_0[32];
    unsigned field_20;
    unsigned field_24;
    unsigned char padding_28[4];
    unsigned char field_2c;
};
}

extern "C" void fn_03ef7e58(OutputView* output) {
    output->field_24 = 0xffffffffu;
    output->field_20 = 0u;
    output->field_2c = 5u;
}
