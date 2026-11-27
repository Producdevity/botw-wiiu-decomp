namespace {
struct Holder {
    char padding_0[0x38];
    void* field_38;
};
}

extern "C" void* data_1047f05c;

extern "C" void* fn_03bb1580(void) {
    Holder* holder = (Holder*)data_1047f05c;
    if (holder != 0) {
        return holder->field_38;
    }
    return data_1047f05c;
}
