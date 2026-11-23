namespace {
struct ListNode {
    ListNode* prev;
    ListNode* next;
};
}

extern "C" void fn_0308e7c8(ListNode* node, ListNode* inserted) {
    ListNode* next = node->next;
    node->next = inserted;
    inserted->prev = node;
    inserted->next = next;
    if (next)
        next->prev = inserted;
}
