namespace {
struct Inner {
    unsigned char padding_0[0x2B08];
    int value;
};

struct Object {
    unsigned char padding_0[0x1C];
    Inner *inner;
};
}

extern "C" int fn_039ceb28(void *arg0) {
    int value = static_cast<Object *>(arg0)->inner->value;
    if (value != 0) {
        return value + 4;
    }
    return value;
}
