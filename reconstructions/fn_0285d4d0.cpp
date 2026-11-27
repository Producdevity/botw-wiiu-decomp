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

extern "C" void fn_0285d4d0(void **arg0) {
    Inner *inner = static_cast<Outer *>(*arg0)->inner;
    inner->flags &= ~0x40u;
}
