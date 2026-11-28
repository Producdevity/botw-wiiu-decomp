namespace {
struct Range {
    int min;
    int max;
};
}

extern "C" void fn_03bc83f4(void *range, int signedRange) {
    if (signedRange == 0) {
        static_cast<Range *>(range)->min = 0;
        static_cast<Range *>(range)->max = 0x7FFFFFFF;
        return;
    }
    static_cast<Range *>(range)->min = 0x80000000;
    static_cast<Range *>(range)->max = -1;
}
