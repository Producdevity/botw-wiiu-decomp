extern "C" int fn_029f9b24(int arg0, int arg1) {
    if (arg1 < 10) {
        int base = arg0 + 0x14;
        if ((unsigned int)arg1 < 10U) {
            return base + arg1 * 0x230;
        }
        return base;
    }
    return 0;
}
