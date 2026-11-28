namespace {
struct Inner {
    char padding_0[0x28];
    int value_28;
};

struct Object {
    char padding_0[0x10];
    Inner *inner;
    unsigned char flags;
};
}

extern "C" int fn_0366c52c(void);

extern "C" int fn_0366d3b8(void* object)
{
    unsigned int flags = ((Object *)object)->flags;
    if ((flags >> 6) & 1) {
        return fn_0366c52c() + 0xA8;
    }
    return ((Object *)object)->inner->value_28;
}
