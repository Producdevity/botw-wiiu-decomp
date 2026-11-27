namespace {
struct Range {
    unsigned int count;
    int base;
};
}

extern "C" int fn_033c2974(void* arg0, unsigned int index) {
    Range* range = (Range*)arg0;
    int base = range->base;
    if (index < range->count) {
        return base + index;
    }
    return base;
}
