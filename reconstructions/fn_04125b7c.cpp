struct Opaque_04125b7c {
    struct Output {
        __vec2x32float__ field_0;
        float field_8;
    };

    __vec2x32float__ field_0;
    float field_8;
};

extern "C" void fn_04125b7c(const Opaque_04125b7c* input, Opaque_04125b7c::Output* output) {
    output->field_0 = input->field_0;
    output->field_8 = input->field_8;
}
