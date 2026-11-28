namespace {
struct Node {
    Node *prev;
    Node *next;
    Node *parent;
};
}

extern "C" void fn_02ae05e4(void *parent, void *child) {
    Node *last;
    Node *current;

    if (((Node *)child)->parent == 0) {
        current = ((Node *)parent)->next;
        if (current == 0) {
            ((Node *)parent)->next = (Node *)child;
            ((Node *)child)->parent = (Node *)parent;
            return;
        }
        do {
            last = current;
            current = current->next;
        } while (current != 0);
        last->next = (Node *)child;
        ((Node *)child)->prev = last;
        ((Node *)child)->parent = (Node *)parent;
    }
}
