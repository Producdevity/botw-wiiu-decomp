namespace { struct Node { Node* first; Node* next; }; }
extern "C" void* fn_03fc370c(void* context) {
    Node* node = static_cast<Node*>(context)->next;
    if (!node) return node;
    while (node->first) node = node->first;
    return node;
}
