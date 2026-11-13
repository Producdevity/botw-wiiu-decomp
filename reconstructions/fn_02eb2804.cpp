extern "C" int fn_02eb2804(void*, int value) {
    if (value == 0) return 0;
    if (!(value != 1 && value != 2)) return 1;
    if (value == 3) return 2;
    if (static_cast<unsigned>(value) - 4 <= 2) return 3;
    if (value == 7) return 4;
    if (value == 8) return 5;
    if (value == 9) return 6;
    return -1;
}
