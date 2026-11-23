struct IndexedNode {
    void* data;
    IndexedNode* next;
};

struct IndexedList {
    void* data;
    IndexedNode* first;
    unsigned int count;
};

extern "C" IndexedNode* fn_0308e8a0(const IndexedList* list, int index) {
    if ((unsigned int)index < list->count) {
        IndexedNode* node = list->first;
        for (int i = 0; i < index; ++i) {
            node = node->next;
        }
        return node;
    }
    return 0;
}
