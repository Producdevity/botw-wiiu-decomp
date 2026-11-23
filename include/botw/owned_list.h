#ifndef BOTW_OWNED_LIST_H
#define BOTW_OWNED_LIST_H

struct OwnedListNode {
    OwnedListNode* next;
    OwnedListNode* prev;
    unsigned char unknown08[4];
    void* owner;
};

struct OwnedList {
    int count;
};

typedef char OwnedListNodeSize[sizeof(OwnedListNode) == 16 ? 1 : -1];

#endif
