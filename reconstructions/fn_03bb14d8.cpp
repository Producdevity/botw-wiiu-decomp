namespace {
struct Singleton {
    char padding_0[0x20];
    void* member;
};
}

extern "C" void* data_1047f05c;

extern "C" void* fn_03bb14d8(void) {
    if (data_1047f05c != 0) {
        return ((Singleton*)data_1047f05c)->member;
    }
    return data_1047f05c;
}
