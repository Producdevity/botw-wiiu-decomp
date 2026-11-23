#include "botw/intrusive_list.h"

extern "C" void fn_0308e9e8(IntrusiveList* list) {
    IntrusiveListNode* node = list->root.next;
    while (node != &list->root) {
        IntrusiveListNode* current = node;
        node = node->next;
        current->prev = 0;
        current->next = 0;
    }
    list->root.prev = &list->root;
    list->root.next = &list->root;
    list->count = 0;
}
