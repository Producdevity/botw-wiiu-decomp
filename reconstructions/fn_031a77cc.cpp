extern "C" void fn_0308ed3c(void*);

namespace {
struct Node {
    char padding_0[8];
    Node *next;
};
struct Object {
    char padding_0[0x188];
    Node *head;
};
}

extern "C" void fn_031a77cc(void *object) {
    Node *node;

    node = ((Object *)object)->head;
    if (node != 0) {
        do {
            fn_0308ed3c(node);
            node = node->next;
        } while (node != 0);
    }
}
