extern "C" void fn_0370e494(void*, void*, int, int, void*, void*);

namespace {
struct Object {
    char padding_0[0x394];
    void *node;
};
}

extern "C" void fn_02d4b078(void *object) {
    void *node;
    void *nodeAgain;

    node = ((Object *)object)->node;
    fn_0370e494(node, node, 1, 1, 0, (void *)1);
    nodeAgain = ((Object *)object)->node;
    fn_0370e494(nodeAgain, nodeAgain, 0, 1, 0, (void *)1);
}
