extern "C" int fn_029f9b4c(int arg0, int arg1) {
    if (arg1 < 7) {
        int entries = arg0 + 0x15F4;
        if ((unsigned int) arg1 < 7U) {
            return entries + arg1 * 0x230;
        }
        return entries;
    }
    return 0;
}
