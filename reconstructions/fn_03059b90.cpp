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

extern "C" void fn_03059b90(void *object, void *source) {
    if (source != 0) {
        static_cast<Object *>(object)->value = static_cast<Source *>(source)->value;
    }
}
