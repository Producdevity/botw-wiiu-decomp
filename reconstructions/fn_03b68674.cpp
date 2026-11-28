namespace {
struct Pair {
    int first;
    int second;
};
}

extern "C" void fn_04348588(int, int, int);
extern "C" void fn_043486d0(int, int, int);

extern "C" void fn_03b68674(int* handle, void* pair, int first, int second) {
    if (first != 0) {
        fn_043486d0(*handle, ((Pair *) pair)->second, ((Pair *) pair)->first);
    }
    if (second != 0) {
        fn_04348588(*handle, ((Pair *) pair)->second, ((Pair *) pair)->first);
    }
}
