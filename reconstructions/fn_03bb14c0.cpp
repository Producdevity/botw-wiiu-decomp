extern "C" void *data_1047f05c;

namespace {
struct Instance {
    unsigned char padding_0[0x1C];
    void *member;
};
}

extern "C" void *fn_03bb14c0(void) {
    if (data_1047f05c != 0) {
        return static_cast<Instance *>(data_1047f05c)->member;
    }
    return data_1047f05c;
}
