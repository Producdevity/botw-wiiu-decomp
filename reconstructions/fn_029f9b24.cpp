extern "C" int fn_029f9b24(int table, int index) {
    if (index < 10) {
        int entries = table + 0x14;
        if ((unsigned int)index < 10U) {
            return entries + index * 0x230;
        }
        return entries;
    }
    return 0;
}
