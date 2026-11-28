namespace {
struct Child;
struct ChildClass {
    char padding_0[0x44];
    void (*visit)(Child *, int);
};
struct Child {
    char padding_0[8];
    ChildClass *child_class;
};
struct Node {
    char padding_0[8];
    Node *next;
    char padding_c[4];
    Child *child;
};
struct Object {
    char padding_0[0x40];
    Node *first;
};
}

extern "C" void fn_03bbf274(void* object, int value) {
    Child* child;
    Node* node;

    node = ((Object *) object)->first;
    if (node != 0) {
        do {
            child = node->child;
            child->child_class->visit(child, value);
            node = node->next;
        } while (node != 0);
    }
}
