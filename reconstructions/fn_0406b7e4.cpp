namespace {
struct Linked {
    char padding_0[0x13];
    signed char value;
};

struct Owner {
    char padding_0[0x1C];
    signed char value;
    char padding_1d[0x13];
    Linked* linked;
};
}

extern "C" void fn_0406b7e4(void* arg0, signed char arg1) {
    Owner* owner = (Owner*)arg0;
    Linked* linked = owner->linked;
    owner->value = arg1;
    if (linked != 0) {
        linked->value = arg1;
    }
}
