namespace {
struct Object {
    char padding_0[0xAC];
    int state;
};
}

extern "C" int fn_031bfbc4(void* object) {
    if (((Object*)object)->state == 0x15) {
        ((Object*)object)->state = 0x16;
    }
    return 1;
}
