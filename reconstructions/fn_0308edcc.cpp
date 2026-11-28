extern "C" void fn_0308ecec(void*);
extern "C" void fn_0308edcc(void*);

namespace {
struct Node {
    unsigned char padding_0[4];
    Node *child;
    Node *next;
};
}

extern "C" void fn_0308edcc(void *node) {
    Node *current = ((Node *)node)->child;
    if (current != 0) {
        do {
            Node *entry = current;
            current = current->next;
            fn_0308edcc(entry);
            fn_0308ecec(entry);
        } while (current != 0);
    }
}
