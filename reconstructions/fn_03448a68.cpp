#include "botw/ptr_array.h"

struct EnableTreeNode {
    unsigned char pad0[4];
    void* primary;
    unsigned char pad8[0xE4 - 8];
    unsigned short flags;
    unsigned char padE6[0x228 - 0xE6];
    PtrArray children;
};
typedef char EnableTreeNodeSize[sizeof(EnableTreeNode) == 0x230 ? 1 : -1];

extern "C" void fn_0348d300(void* object, bool enable);

static inline void set_children_enabled(PtrArray* children, int first, bool enable) {
    for (int i = first; i < children->count; ++i) {
        void* child = *ptr_array_slot(children, i);
        if (child == 0)
            continue;
        fn_0348d300(*ptr_array_slot(children, i), enable);
    }
}

extern "C" void fn_03448a68(EnableTreeNode* node, bool enable) {
    fn_0348d300(node->primary, enable);
    if ((node->flags >> 13) & 1) {
        set_children_enabled(&node->children, 0, enable);
    }
}
