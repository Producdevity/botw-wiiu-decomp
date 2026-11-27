namespace {
struct Inner {
    unsigned char padding_0[0x4A6];
    unsigned short flags;
};
}

extern "C" int fn_0233d270(void **arg0) {
    static_cast<Inner *>(*arg0)->flags |= 2;
    return 1;
}
