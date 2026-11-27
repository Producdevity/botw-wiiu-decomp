typedef int s32;
typedef unsigned char u8;

namespace {
struct Node {
    unsigned char padding_0[0x14];
    unsigned char list[0x2C];
    int state;
};
}

extern "C" bool fn_0378da88(void *);

extern "C" u8 fn_02a3ff4c(void *arg0) {
    Node *node = (Node *)arg0;
    s32 result = 0;
    if (node->state != 1 && fn_0378da88(node->list) == 0) {
        result = 1;
    }
    return result;
}
