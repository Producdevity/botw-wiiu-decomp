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

extern "C" int fn_03cb3464(void* arg0, void* arg1) {
    if (arg1 == 0) {
        return 0xFF676984;
    }
    Pair* out = (Pair*)arg0;
    Source* source = (Source*)arg1;
    out->first = source->first;
    out->second = source->second;
    return 0;
}
