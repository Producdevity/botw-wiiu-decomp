extern "C" void fn_03c1ea3c(int, int);

namespace {
struct Node {
    char padding_0[176];
    unsigned char enabled;
    unsigned char active;
    char padding_B2[0x238 - 0xB2];
    int handle;
    Node *next;
};

struct List {
    char padding_0[536];
    Node *head;
};
}

extern "C" void fn_03c40470(void* object, unsigned char active) {
    Node *node = ((List *)object)->head;
    if (node != 0) {
        do {
            if (node->active != 0 && (unsigned int)(node->enabled != 0) != active) {
                node->enabled = active;
                fn_03c1ea3c(node->handle, active);
            }
            node = node->next;
        } while (node != 0);
    }
}
