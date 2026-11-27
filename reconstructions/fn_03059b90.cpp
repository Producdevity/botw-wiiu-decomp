namespace {
struct Source {
    unsigned char padding_0[0xC];
    float value;
};

struct Object {
    unsigned char padding_0[0x40CC8];
    float value;
};
}

extern "C" void fn_03059b90(void *arg0, void *arg1) {
    if (arg1 != 0) {
        static_cast<Object *>(arg0)->value = static_cast<Source *>(arg1)->value;
    }
}
