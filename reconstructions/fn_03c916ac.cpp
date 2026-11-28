extern "C" int fn_03c916ac(int flags) {
    int offset = 0;
    if (flags & 1) {
        offset = 0xA0000;
    }
    if (flags & 2) {
        offset += 0x120000;
    }
    return 0x01980000 - offset;
}
