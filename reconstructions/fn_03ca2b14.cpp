namespace {
struct Owner {
    char padding_0[0x42F];
    signed char slot1;
    signed char slot2;
    signed char slot3;
};
}

extern "C" void fn_03ca2b14(void* arg0, unsigned int arg1, signed char arg2) {
    Owner* owner = (Owner*)arg0;
    switch (arg1) {
    case 1:
        owner->slot1 = arg2;
        return;
    case 2:
        owner->slot2 = arg2;
        return;
    case 3:
        owner->slot3 = arg2;
        return;
    }
}
