namespace {
struct Owner {
    unsigned char padding_0[0x4A6];
    unsigned short flags;
};
}

extern "C" int fn_0233d270(void **object) {
    static_cast<Owner *>(*object)->flags |= 2;
    return 1;
}
