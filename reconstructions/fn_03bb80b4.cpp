typedef signed char s8;

extern "C" void fn_03bb4e28(void*, void*);

namespace {
struct Node {
    char padding_0[8];
    char link[0x15];
    s8 linked;
    char padding_1E[0xF8 - 0x1E];
    void *list;
};
}

extern "C" void fn_03bb80b4(void *node) {
    Node *self = (Node *)node;
    void *list = self->list;

    if (list != 0) {
        fn_03bb4e28(list, self->link);
    }
    self->linked = 0;
}
