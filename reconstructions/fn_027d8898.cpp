typedef int s32;
typedef unsigned char u8;

namespace {
struct Node {
    unsigned char padding_0[0x7C];
    u8 *active;
};
}

extern "C" int fn_0289d8a8(void*);

extern "C" u8 fn_027d8898(void *arg0) {
    Node *node = (Node *)arg0;
    s32 result = 1;
    if (*node->active == 0 && fn_0289d8a8(arg0) == 0) {
        result = 0;
    }
    return result;
}
