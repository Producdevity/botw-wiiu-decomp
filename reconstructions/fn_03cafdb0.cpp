namespace {
struct Owner {
    char padding_0[0x30];
    int slot1;
    int slot2;
    int slot3;
};
}

extern "C" void fn_03cafdb0(void* self, unsigned int slot, int value) {
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
