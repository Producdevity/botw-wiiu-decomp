struct ReadyFlagged {
    char pad0[0x50];
    unsigned char ready;
};

struct DependentNode {
    char pad0[0x18];
    void* source;
    char pad1c[0x3c - 0x1c];
    unsigned char notifier[0x50 - 0x3c];
    unsigned char flags;
};

extern "C" ReadyFlagged* fn_03b9e7e0(void* source);
extern "C" void fn_03b9d104(void* notifier);

extern "C" void fn_03b9f39c(DependentNode* node) {
    unsigned char flags = node->flags;
    if ((flags >> 1) & 1) {
        return;
    }
    ReadyFlagged* resolved = fn_03b9e7e0(node->source);
    if (resolved != 0 && resolved->ready != 0) {
        fn_03b9d104(node->notifier);
    }
}
