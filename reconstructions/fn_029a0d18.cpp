typedef int s32;
typedef unsigned char u8;

namespace {
struct Node {
    unsigned char padding_0[0x40];
    int *state;
};
}

extern "C" int fn_02b83f20(void*, void*);

extern "C" u8 fn_029a0d18(void *object, void *other) {
    Node *node = (Node *)object;
    s32 result = 0;
    if (*node->state != 4 && fn_02b83f20(object, other) != 0) {
        result = 1;
    }
    return result;
}
