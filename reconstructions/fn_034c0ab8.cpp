extern "C" void fn_034a9b38(void*);
extern "C" void fn_03485f68(void*);
extern "C" void fn_0344a078(void*);
extern "C" void fn_0380e8f0(void*);

struct ListNode {
    ListNode* prev;
    ListNode* next;
    void* item;
};

extern "C" void fn_034c0ab8(void* self) {
    void** it = *(void***)((char*)self + 0x2C);
    void** end = it + *(int*)((char*)self + 0x24);
    for (; it != end; ++it) {
        fn_034a9b38(*it);
    }
    ListNode* node = ((ListNode*)((char*)self + 0xB8))->next;
    ListNode* head = (ListNode*)((char*)self + 0xB8);
    for (; node != head; node = node->next) {
        fn_03485f68(node->item);
    }
    void* link = *(void**)((char*)self + 0x50);
    if (link != 0) {
        fn_0344a078(link);
    }
    void* other = *(void**)((char*)self + 0x58);
    if (other != 0) {
        fn_0380e8f0(other);
    }
}
