namespace {
struct OutputView {
    unsigned char padding_0[20];
    unsigned field_14;
    unsigned field_18;
    unsigned field_1c;
    unsigned char field_20;
};
}

namespace {
inline void impl(OutputView* output) {
    output->field_14 = 0u;
    output->field_18 = 1u;
    output->field_1c = 0u;
    output->field_20 = 1u;
}
}

extern "C" void fn_030bebbc(void* output) {
    impl(static_cast<OutputView*>(output));
}
