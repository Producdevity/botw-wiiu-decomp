extern "C" void fn_03711d64(void*, int, int, void*, int, int);

namespace {
struct Node {
    unsigned char padding_0[12];
    unsigned char payload[8];
    int value;
    Node *next;
};

struct Owner {
    unsigned char padding_0[4];
    int first;
    unsigned char padding_8[0x9C];
    int second;
    unsigned char padding_A8[84];
    Node *head;
};
}

extern "C" void fn_03711de8(void* arg0, int arg1) {
    Node *node = ((Owner *)arg0)->head;
    if (node != 0) {
        do {
            fn_03711d64(node, ((Owner *)arg0)->second, ((Owner *)arg0)->first, node->payload, node->value, arg1);
            node = node->next;
        } while (node != 0);
    }
}
