#include "botw/ghs_intrinsics.h"

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
extern "C" void fn_03b9e020(void* notifier, void* value, int index);

extern "C" void fn_03b9fb60(DependentNode* node, void* value, int index) {
    __schedule_barrier();
    void* source = node->source;
    ReadyFlagged* resolved = fn_03b9e7e0(source);
    if (!resolved->ready)
        return;
    unsigned char* notifier = node->notifier;
    fn_03b9e020(notifier, value, index);
}
