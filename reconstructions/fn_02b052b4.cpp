namespace {
struct Inner {
    unsigned char padding_0[0x5DC];
    unsigned char value;
};
struct Mid {
    unsigned char padding_0[0x90];
    Inner* inner;
};
struct Owner {
    unsigned char padding_0[0x39C];
    Mid* mid;
};
}

extern "C" unsigned char fn_02b052b4(void* object) {
    Owner* self = (Owner*) object;
    if (self == 0 || self->mid == 0 || self->mid->inner == 0) {
        return 0;
    }
    return self->mid->inner->value;
}
