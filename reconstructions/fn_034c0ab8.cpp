extern "C" void fn_034a9b38(void*);
extern "C" void fn_03485f68(void*);
extern "C" void fn_0344a078(void*);
extern "C" void fn_0380e8f0(void*);

struct ListNode {
    ListNode* prev;
    ListNode* next;
    void* item;
};

namespace {
struct Object {
    char padding_0[0x24];
    int count;
    char padding_28[4];
    void **items;
    char padding_30[0x20];
    void *link;
    char padding_54[4];
    void *other;
    char padding_5C[0x5C];
    ListNode list;
};
}

extern "C" void fn_034c0ab8(void* self) {
    void** it = ((Object *)self)->items;
    void** end = it + ((Object *)self)->count;
    for (; it != end; ++it) {
        fn_034a9b38(*it);
    }
    ListNode* node = ((Object *)self)->list.next;
    ListNode* head = &((Object *)self)->list;
    for (; node != head; node = node->next) {
        fn_03485f68(node->item);
    }
    void* link = ((Object *)self)->link;
    if (link != 0) {
        fn_0344a078(link);
    }
    void* other = ((Object *)self)->other;
    if (other != 0) {
        fn_0380e8f0(other);
    }
}
