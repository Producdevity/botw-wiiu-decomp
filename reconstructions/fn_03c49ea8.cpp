#include "botw/owned_list.h"

namespace {

struct Container {
    unsigned char unknown00[16];
    OwnedList list;
};

}

extern "C" void fn_03c0e68c(OwnedList* list, OwnedListNode* node);

extern "C" void fn_03c49ea8(void* raw, OwnedListNode* node) {
    Container* container = static_cast<Container*>(raw);
    fn_03c0e68c(&container->list, node);
    node->owner = 0;
}
