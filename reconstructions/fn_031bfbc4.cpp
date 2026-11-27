namespace {
struct Object {
    char padding_0[0xAC];
    int state;
};
}

extern "C" int fn_031bfbc4(void* arg0) {
    if (((Object*)arg0)->state == 0x15) {
        ((Object*)arg0)->state = 0x16;
    }
    return 1;
}
