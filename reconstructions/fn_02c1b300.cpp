typedef unsigned char u8;
typedef int s32;

namespace {
struct Object {
    unsigned char padding_0[0xE8];
    void *const *vtable;
};
}

extern "C" u8 fn_02c1b300(void *arg0) {
    s32 result = 0;
    if ((arg0 != 0) && (((s32 (*)())((Object *)arg0)->vtable[253])() != 0)) {
        result = 1;
    }
    return result;
}
