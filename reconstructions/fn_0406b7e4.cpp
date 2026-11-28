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

extern "C" void fn_0406b7e4(void* self, signed char value) {
    Owner* owner = static_cast<Owner*>(self);
    Linked* linked = owner->linked;
    owner->value = value;
    if (linked != 0) {
        linked->value = value;
    }
}
