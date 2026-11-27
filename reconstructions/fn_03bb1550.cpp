namespace {
struct Holder {
    char padding_0[0x30];
    void* field_30;
};
}

extern "C" void* data_1047f05c;

extern "C" void* fn_03bb1550(void) {
    Holder* holder = (Holder*)data_1047f05c;
    if (holder != 0) {
        return holder->field_30;
    }
    return data_1047f05c;
}
