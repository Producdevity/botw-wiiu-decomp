#ifndef BOTW_INTRUSIVE_LIST_H
#define BOTW_INTRUSIVE_LIST_H

struct IntrusiveListNode {
    IntrusiveListNode* prev;
    IntrusiveListNode* next;
};

struct IntrusiveList {
    IntrusiveListNode root;
    int count;
};
typedef char IntrusiveListSize[sizeof(IntrusiveList) == 12 ? 1 : -1];

extern "C" void fn_0308e9e8(IntrusiveList* list);

#endif
