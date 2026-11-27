namespace {
struct Source {
    char padding_0[0x40CC8];
    float value;
};

struct Destination {
    char padding_0[0xC];
    float value;
};
}

extern "C" void fn_03059ba8(void* arg0, void* arg1) {
    if (arg1 != 0) {
        ((Destination*)arg1)->value = ((Source*)arg0)->value;
    }
}
