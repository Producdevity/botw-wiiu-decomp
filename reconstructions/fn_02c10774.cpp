extern "C" int fn_02c10774(int value) {
    unsigned bits = value;
    return (bits | (bits - 1)) >> 31;
}
