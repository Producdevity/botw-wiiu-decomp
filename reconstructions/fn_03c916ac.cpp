extern "C" int fn_03c916ac(int arg0) {
    int offset = 0;
    if (arg0 & 1) {
        offset = 0xA0000;
    }
    if (arg0 & 2) {
        offset += 0x120000;
    }
    return 0x01980000 - offset;
}
