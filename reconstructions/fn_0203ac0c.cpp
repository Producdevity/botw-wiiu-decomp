namespace {
struct Node {
    int value;
    int *data;
    int field_8;
    int field_c;
};
}

extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_10007b54;
extern "C" void fn_0203ac0c(void* self, int value)
{
    Node *node = (Node *)self;
    if (node != 0 || (node = (Node *)fn_0308e578(0x10)) != 0) {
        node->value = value;
        node->data = &data_10007b54;
        node->field_8 = 0;
        node->field_c = 0;
    }
}
