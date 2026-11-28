namespace {
struct Source {
    char padding_0[0x78];
    int first;
    int second;
};
}

extern "C" int fn_03cab8e8(void* self, int* firstOut, int* secondOut) {
    if (firstOut == 0 || secondOut == 0) {
        return 0xFF676984;
    }
    Source* source = static_cast<Source*>(self);
    *firstOut = source->first;
    *secondOut = source->second;
    return 0;
}
