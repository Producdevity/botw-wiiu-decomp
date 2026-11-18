#include "botw/ghs_intrinsics.h"

struct ListLink {
    ListLink* next;
    ListLink* previous;
};

extern "C" void fn_0308e808(ListLink* link);

namespace {

struct OwnerView {
    unsigned char padding[16];
    ListLink sentinel;
    unsigned count;
    unsigned linkOffset;
};

typedef char OwnerViewSize[sizeof(OwnerView) == 32 ? 1 : -1];

}

extern "C" void fn_02de5c94(void* context, void* object) {
    OwnerView* owner = static_cast<OwnerView*>(context);
    __schedule_barrier();
    unsigned char* storage = static_cast<unsigned char*>(object);
    ListLink* link = reinterpret_cast<ListLink*>(storage + owner->linkOffset);
    fn_0308e808(link);
    --owner->count;
}
