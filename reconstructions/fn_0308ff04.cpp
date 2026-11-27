namespace {
struct Object {
    unsigned char padding_0[0x30];
    unsigned char enabled;
};

struct Info {
    unsigned char padding_0[9];
    unsigned char value;
};
}

extern "C" unsigned char fn_0308ff04(void *arg0, void *arg1) {
    if (static_cast<Object *>(arg0)->enabled != 0) {
        return static_cast<Info *>(arg1)->value;
    }
    return 0;
}
