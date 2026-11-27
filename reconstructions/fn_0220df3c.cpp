typedef int s32;
typedef unsigned char u8;

namespace {
struct Node {
    unsigned char padding_0[0xB];
    unsigned char flags;
    unsigned char padding_c[4];
    int *state;
};
}

extern "C" int fn_0220de2c(void*);

extern "C" u8 fn_0220df3c(void *arg0) {
    Node *node = (Node *)arg0;
    s32 result = 1;
    if (!((node->flags >> 2) & 1) && (*node->state != 2 || fn_0220de2c(arg0) == 0)) {
        result = 0;
    }
    return result;
}
