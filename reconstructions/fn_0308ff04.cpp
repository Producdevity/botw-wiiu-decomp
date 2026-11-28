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

extern "C" unsigned char fn_0308ff04(void *object, void *info) {
    if (static_cast<Object *>(object)->enabled != 0) {
        return static_cast<Info *>(info)->value;
    }
    return 0;
}
