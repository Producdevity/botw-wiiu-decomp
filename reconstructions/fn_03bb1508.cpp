namespace {
struct Singleton {
    char padding_0[0x24];
    void* member;
};
}

extern "C" void* data_1047f05c;

extern "C" void* fn_03bb1508(void) {
    if (data_1047f05c != 0) {
        return ((Singleton*)data_1047f05c)->member;
    }
    return data_1047f05c;
}
