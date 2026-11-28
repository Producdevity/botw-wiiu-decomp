typedef int s32;
typedef unsigned char u8;

namespace {
struct Node {
    unsigned char padding_0[0xB];
    unsigned char flags;
};
}

extern "C" int fn_03794838(void*, void*, void*);

extern "C" u8 fn_0223abfc(void *object) {
    s32 result = 1;
    if (fn_03794838(object, 0, 0) == 0 && !(((Node *)object)->flags & 1)) {
        result = 0;
    }
    return result;
}
