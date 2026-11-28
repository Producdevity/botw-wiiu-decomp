namespace {
struct Owner {
    char padding_0[0x42F];
    signed char slot1;
    signed char slot2;
    signed char slot3;
};
}

extern "C" void fn_03ca2b14(void* self, unsigned int slot, signed char value) {
    Owner* owner = static_cast<Owner*>(self);
    switch (slot) {
    case 1:
        owner->slot1 = value;
        return;
    case 2:
        owner->slot2 = value;
        return;
    case 3:
        owner->slot3 = value;
        return;
    }
}
