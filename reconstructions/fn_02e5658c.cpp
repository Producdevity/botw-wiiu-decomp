namespace {
struct Pair {
    char padding_0[0xC];
    int first;
    int second;
};
}

extern "C" void fn_0378dc60(int, int);

extern "C" void fn_02e5658c(int destination, int source) {
    Pair* dst = (Pair*)destination;
    Pair* src = (Pair*)source;
    fn_0378dc60(destination, source);
    int first = src->first;
    dst->first = first;
    dst->second = src->second;
}
