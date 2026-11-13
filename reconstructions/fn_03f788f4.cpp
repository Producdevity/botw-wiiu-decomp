namespace { struct Node { unsigned reserved; const Node* next; unsigned reserved2; int value; }; }
extern "C" int fn_03f788f4(const void* context) {
    const Node* node = static_cast<const Node*>(context);
    unsigned total = static_cast<unsigned>(node->value);
    for (node = node->next; node; node = node->next) total += static_cast<unsigned>(node->value);
    return static_cast<int>(total);
}
