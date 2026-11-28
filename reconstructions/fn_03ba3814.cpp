namespace {
struct Node;
struct NodeClass {
    char padding_0[0x44];
    void (*visit)(Node *);
};
struct Node {
    char padding_0[0xC];
    Node *next;
    char padding_10[4];
    NodeClass *node_class;
};
struct Owner {
    char padding_0[8];
    Node *first;
    char padding_c[4];
    int count;
};
}

extern "C" void fn_03ba3814(void *self)
{
    Node *node = ((Owner *) self)->first;
    if (node != 0) {
        do {
            Node *current = node;
            current->node_class->visit(current);
            node = current->next;
        } while (node != 0);
    }
    ((Owner *) self)->count = 0;
}
