namespace {
struct Node;
struct NodeVtable {
    char padding_0[0x14];
    int (*visit)(void *, int);
};
struct Node {
    char padding_0[8];
    void *next;
    NodeVtable *vtable;
};
}

extern "C" void fn_03124f38(void *arg0, int arg1) {
    void *node = arg0;
    if (node != 0) {
        do {
            ((Node *) node)->vtable->visit(node, arg1);
            node = ((Node *) node)->next;
        } while (node != 0);
    }
}
