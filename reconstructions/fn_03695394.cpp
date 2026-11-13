namespace { struct Node { unsigned char padding[24]; Node* next; }; }
extern "C" void* fn_03695394(void* context) {
    Node* node = static_cast<Node*>(context);
    while (node->next) node = node->next;
    return node;
}
