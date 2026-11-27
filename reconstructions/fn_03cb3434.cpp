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

extern "C" int fn_03cb3434(void *arg0, void *arg1) {
    Pair *out = (Pair *) arg0;
    Source *src = (Source *) arg1;
    if (src == 0) {
        return 0xFF676984;
    }
    out->first = src->first;
    out->second = src->second;
    return 0;
}
