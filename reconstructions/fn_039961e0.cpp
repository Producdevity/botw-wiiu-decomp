namespace {
struct Source {
    int first;
    unsigned short second;
};
}

extern "C" void fn_039961e0(int* out_first, unsigned short* out_second, void* data) {
    Source* source = (Source*)data;
    if (out_first != 0) {
        *out_first = source->first;
    }
    if (out_second != 0) {
        *out_second = source->second;
    }
}
