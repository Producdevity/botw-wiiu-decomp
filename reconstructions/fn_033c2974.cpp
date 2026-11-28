namespace {
struct Range {
    unsigned int count;
    int base;
};
}

extern "C" int fn_033c2974(void* object, unsigned int index) {
    Range* range = (Range*)object;
    int base = range->base;
    if (index < range->count) {
        return base + index;
    }
    return base;
}
