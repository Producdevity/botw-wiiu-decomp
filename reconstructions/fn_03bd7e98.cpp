namespace {
struct Object {
    char padding_0[0xB4];
    unsigned short mask;
};
}

extern "C" int fn_03bd7e98(void* arg0, int index) {
    if (index < 0x10 && !(((Object*)arg0)->mask & (1 << index))) {
        return 0;
    }
    return 1;
}
