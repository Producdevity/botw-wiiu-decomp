extern "C" int fn_03c936bc(unsigned int value, unsigned int low, unsigned int high) {
    if (value < low || value > high) {
        return -1;
    }
    return 0;
}
