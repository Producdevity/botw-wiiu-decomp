namespace {
struct Inner {
    char padding_0[0x10];
    int flags;
};

struct Owner {
    char padding_0[0x3B0];
    Inner* inner;
};
}

extern "C" void fn_027e4fc0(void** object) {
    Inner* inner = ((Owner*)*object)->inner;
    inner->flags &= ~0x40;
}
