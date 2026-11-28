namespace {
struct Source {
    char padding_0[8];
    int second;
    char padding_c[0x10];
    int first;
};
struct Pair {
    int first;
    int second;
};
}

extern "C" int fn_03cb3434(void *dest, void *source) {
    Pair *out = static_cast<Pair *>(dest);
    Source *src = static_cast<Source *>(source);
    if (src == 0) {
        return 0xFF676984;
    }
    out->first = src->first;
    out->second = src->second;
    return 0;
}
