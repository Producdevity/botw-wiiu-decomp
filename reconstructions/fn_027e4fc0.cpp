namespace {
struct Owner {
    char padding_0[0x3B0];
    void* inner;
};

struct Inner {
    char padding_0[0x10];
    int flags;
};
}

extern "C" void fn_027e4fc0(void** arg0) {
    Owner* owner = (Owner*)*arg0;
    Inner* inner = (Inner*)owner->inner;
    inner->flags = inner->flags & 0xFFFFFFBF;
}
