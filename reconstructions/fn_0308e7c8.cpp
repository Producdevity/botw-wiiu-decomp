struct Opaque_0308e7c8 {
    Opaque_0308e7c8* prev;
    Opaque_0308e7c8* next;
};

extern "C" void fn_0308e7c8(Opaque_0308e7c8* node, Opaque_0308e7c8* inserted) {
    Opaque_0308e7c8* next = node->next;
    node->next = inserted;
    inserted->prev = node;
    inserted->next = next;
    if (next)
        next->prev = inserted;
}
