typedef int s32;
typedef unsigned char u8;

namespace {
struct Node {
    unsigned char padding_0[0x30];
    u8 *active;
};
}

extern "C" int fn_037b7e30(void*);

extern "C" u8 fn_02974b30(void *arg0) {
    Node *node = (Node *)arg0;
    s32 result = 1;
    if (*node->active == 0 && fn_037b7e30(arg0) == 0) {
        result = 0;
    }
    return result;
}
