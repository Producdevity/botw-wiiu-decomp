extern "C" int fn_02e6b748(int *, int);
extern "C" void fn_03c49e20(void*, void*);
struct Container;
struct OwnedListNode;
extern "C" void fn_03c49ea8(void*, OwnedListNode*);

namespace {
struct Entry {
    char padding_0[0xC];
    OwnedListNode* node;
};
struct Node {
    char padding_0[0xC];
    Container* container;
};
}

extern "C" void fn_02e6b864(int *table, int index, void *list) {
    Entry *entry = (Entry*)fn_02e6b748(table, index);
    if (entry != 0) {
        OwnedListNode *node = entry->node;
        Container *container = ((Node*)node)->container;
        if (container != 0) {
            fn_03c49ea8(container, node);
        }
        fn_03c49e20(list, entry->node);
    }
}
