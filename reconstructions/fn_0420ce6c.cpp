struct ListNode {
    ListNode* next;
};

extern "C" ListNode* data_105cab3c;

extern "C" void fn_0420ce6c(ListNode* node) {
    if (node->next != 0) {
        return;
    }
    ListNode* head = data_105cab3c;
    if (node == head) {
        return;
    }
    data_105cab3c = node;
    node->next = head;
}
