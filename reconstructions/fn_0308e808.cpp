#include "botw/ghs_intrinsics.h"

struct ListLink {
    ListLink* next;
    ListLink* previous;
};

typedef char ListLinkSize[sizeof(ListLink) == 8 ? 1 : -1];

extern "C" void fn_0308e808(ListLink* link) {
    ListLink* next = link->next;
    if (next) {
        ListLink*& previous = link->previous;
        next->previous = previous;
    }
    __memory_changed();
    ListLink* previous = link->previous;
    if (previous)
        previous->next = link->next;
    link->next = link->previous = 0;
}
