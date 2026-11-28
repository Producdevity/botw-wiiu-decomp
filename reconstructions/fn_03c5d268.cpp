namespace {
struct Node {
    int value;
    int field_4;
    int field_8;
    int field_c;
};
}

extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03c5d268(void* self, int value)
{
    Node *node = (Node *)self;
    if (node != 0 || (node = (Node *)fn_0308e578(0x10)) != 0) {
        node->value = value;
        node->field_4 = 0;
        node->field_8 = -1;
        node->field_c = -1;
    }
}
