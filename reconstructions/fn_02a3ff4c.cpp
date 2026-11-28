namespace {
struct Node {
    unsigned char padding_0[0x14];
    unsigned char list[0x2C];
    int state;
};
}

extern "C" bool fn_0378da88(void*);

extern "C" unsigned char fn_02a3ff4c(void* object) {
    Node* node = (Node*)object;
    int result = 0;
    if (node->state != 1 && fn_0378da88(node->list) == 0) {
        result = 1;
    }
    return result;
}
