namespace {
struct Node {
    char padding_0[0xC];
    int offset;
};

struct Owner {
    char padding_0[8];
    Node* node;
};
}

extern "C" void* fn_03c46fcc(void* owner) {
    Node* node = static_cast<Owner*>(owner)->node;
    if (node != 0) {
        return (char*)node + node->offset;
    }
    return node;
}
