namespace {
struct OutputView {
    unsigned field_0;
    unsigned char padding_4[4];
    unsigned field_8;
    unsigned field_c;
    unsigned char field_10;
    unsigned char padding_11[3];
    unsigned field_14;
    unsigned field_18;
    unsigned field_1c;
    unsigned field_20;
    unsigned char field_24;
};
}

extern "C" void fn_03c92f6c(void* output) {
    static_cast<OutputView*>(output)->field_1c = 0u;
    static_cast<OutputView*>(output)->field_10 = 0u;
    static_cast<OutputView*>(output)->field_24 = 0u;
    static_cast<OutputView*>(output)->field_20 = 0u;
    static_cast<OutputView*>(output)->field_18 = 0u;
    static_cast<OutputView*>(output)->field_8 = 0u;
    static_cast<OutputView*>(output)->field_c = 0u;
    static_cast<OutputView*>(output)->field_0 = 0u;
    static_cast<OutputView*>(output)->field_14 = 0u;
}
