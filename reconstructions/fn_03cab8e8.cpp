namespace {
struct Source {
    char padding_0[0x78];
    int first;
    int second;
};
}

extern "C" int fn_03cab8e8(void* arg0, int* arg1, int* arg2) {
    if (arg1 == 0 || arg2 == 0) {
        return 0xFF676984;
    }
    Source* source = (Source*)arg0;
    *arg1 = source->first;
    *arg2 = source->second;
    return 0;
}
