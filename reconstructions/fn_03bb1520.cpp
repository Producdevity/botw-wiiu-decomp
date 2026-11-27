namespace {
struct Holder {
    char padding_0[0x28];
    void* field_28;
};
}

extern "C" void* data_1047f05c;

extern "C" void* fn_03bb1520(void) {
    Holder* holder = (Holder*)data_1047f05c;
    if (holder != 0) {
        return holder->field_28;
    }
    return data_1047f05c;
}
