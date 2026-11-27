namespace {
struct Pair {
    int first;
    int second;
};
}

extern "C" void* fn_0308e578(unsigned);

extern "C" void fn_03a38d4c(void *dest, void *src) {
    Pair *out = (Pair *)dest;
    if (out != 0 || (out = (Pair *)fn_0308e578(8U)) != 0) {
        const Pair *in = (const Pair *)src;
        out->first = in->first;
        out->second = in->second;
    }
}
