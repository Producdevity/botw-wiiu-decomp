namespace {
struct Inner {
    unsigned char padding_0[0x10];
    unsigned int flags;
};
struct Owner {
    unsigned char padding_0[0x3A0];
    Inner* inner;
};
}

extern "C" unsigned char fn_02b51b88(void* object) {
    Owner* self = (Owner*) object;
    if (self == 0 || self->inner == 0) {
        return 0;
    }
    return ((self->inner->flags >> 19) & 1) ^ 1;
}
