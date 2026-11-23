struct SizedRange {
    int position;
    int size;
    void* data;
};

extern "C" void fn_0308ea24(SizedRange* range, int size, void* data) {
    if (size > 0 && data != 0) {
        range->position = 0;
        range->data = data;
        range->size = size;
    }
}
