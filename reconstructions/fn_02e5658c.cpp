namespace {
struct Pair {
    char padding_0[0xC];
    int first;
    int second;
};
}

extern "C" void fn_0378dc60(int, int);

extern "C" void fn_02e5658c(int arg0, int arg1) {
    Pair *dst = (Pair *) arg0;
    Pair *src = (Pair *) arg1;
    fn_0378dc60(arg0, arg1);
    int first = src->first;
    dst->first = first;
    dst->second = src->second;
}
