namespace {
struct Inner {
    unsigned char padding_0[0x10];
    unsigned int flags;
};

struct Outer {
    unsigned char padding_0[0x3B0];
    Inner *inner;
};
}

extern "C" void fn_0285d4d0(void **object) {
    Inner *inner = static_cast<Outer *>(*object)->inner;
    inner->flags &= ~0x40u;
}
