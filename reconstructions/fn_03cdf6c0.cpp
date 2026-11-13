extern "C" int fn_03cdf6c0(int value, const signed char* table, int last, bool ascending) {
    if (value <= table[0]) return table[0];
    if (value >= table[last]) return table[last];
    if (ascending) {
        last = 0;
        while (table[last] < value) ++last;
        return table[last];
    } else {
        int index = last;
        while (table[index] > value) --index;
        return table[index];
    }
}
