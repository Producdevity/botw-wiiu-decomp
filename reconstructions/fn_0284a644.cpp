namespace {
struct Inner {
    unsigned char padding_0[0x7CC];
    int value;
};
}

extern "C" int fn_0284a644(void** object) {
    Inner* inner = (Inner*) *object;
    if (inner == 0 || inner->value == 0) {
        return 0;
    }
    return inner->value;
}
