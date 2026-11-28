namespace {
struct Pair {
    int first;
    int second;
};

struct Source {
    char padding_0[8];
    int second;
    char padding_c[0x10];
    int first;
};
}

extern "C" int fn_03cb3464(void* dest, void* source) {
    if (source == 0) {
        return 0xFF676984;
    }
    Pair* out = static_cast<Pair*>(dest);
    Source* in = static_cast<Source*>(source);
    out->first = in->first;
    out->second = in->second;
    return 0;
}
