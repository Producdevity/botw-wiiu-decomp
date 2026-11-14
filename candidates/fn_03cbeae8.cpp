namespace {
struct RecordView {
    unsigned first;
    unsigned second;
    unsigned third;
    unsigned fourth;
    unsigned fifth;
    unsigned sixth;
    unsigned seventh;
    unsigned eighth;
    void reset() {
        eighth = ~0u;
        third = 0;
        fifth = ~0u;
        fourth = 0;
        sixth = ~0u;
        first = ~0u;
        seventh = ~0u;
        second = ~0u;
    }
};
}

extern "C" void fn_03cbeae8(void* context) {
    static_cast<RecordView*>(context)->reset();
}
