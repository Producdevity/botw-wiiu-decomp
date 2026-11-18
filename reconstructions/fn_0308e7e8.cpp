struct ListLink {
    ListLink* next;
    ListLink* previous;
};

typedef char ListLinkSize[sizeof(ListLink) == 8 ? 1 : -1];

extern "C" void fn_0308e7e8(ListLink* predecessor, ListLink* link) {
    ListLink* successor = predecessor->next;
    predecessor->next = link;
    link->previous = predecessor;
    link->next = successor;
    if (successor)
        successor->previous = link;
}
