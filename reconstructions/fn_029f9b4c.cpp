extern "C" int fn_029f9b4c(int table, int index) {
    if (index < 7) {
        int entries = table + 0x15F4;
        if ((unsigned int)index < 7U) {
            return entries + index * 0x230;
        }
        return entries;
    }
    return 0;
}
