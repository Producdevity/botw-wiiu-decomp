extern "C" int fn_033f95b4(unsigned value, int index, int count, int extra) {
    return (value & ~count) | ((extra << index) & count);
}
