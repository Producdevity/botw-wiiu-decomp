#include "botw/teardown.h"

extern "C" unsigned char data_1028b514[];

extern "C" void fn_0317f8b8(void* owner, void* node);

struct OwnedNode {
    char pad0[0xc];
    void* owner;
    void* vtable;
};

extern "C" void fn_03180688(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        OwnedNode* node = static_cast<OwnedNode*>(object);
        node->vtable = data_1028b514;
        void* owner = node->owner;
        if (owner)
            fn_0317f8b8(owner, object);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
