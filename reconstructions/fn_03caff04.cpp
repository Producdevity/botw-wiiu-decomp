namespace {
struct Owner {
    char padding_0[0x48];
    int slot2;
    int slot1;
    int slot3;
};
}

extern "C" void fn_03caff04(void* arg0, unsigned int arg1, int arg2) {
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
