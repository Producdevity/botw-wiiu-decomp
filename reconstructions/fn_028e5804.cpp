typedef int s32;
typedef unsigned char u8;

namespace {
struct Node {
    unsigned char padding_0[0xB0];
    u8 enabled;
};
}

extern "C" int fn_0253e718(void*);

extern "C" u8 fn_028e5804(void *arg0) {
    Node *node = (Node *)arg0;
    s32 result = 0;
    if (node->enabled != 0 && fn_0253e718(arg0) != 0) {
        result = 1;
    }
    return result;
}
