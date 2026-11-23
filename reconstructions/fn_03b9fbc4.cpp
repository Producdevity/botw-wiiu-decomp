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
extern "C" void fn_03b9e13c(void* notifier, int index);

extern "C" void fn_03b9fbc4(DependentNode* node, int index) {
    __schedule_barrier();
    ReadyFlagged* resolved = fn_03b9e7e0(node->source);
    if (resolved->ready) {
        fn_03b9e13c(node->notifier, index);
    }
}
