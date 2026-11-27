typedef int s32;

namespace {
struct Node {
    unsigned char padding_0[0xB];
    unsigned char flags;
};
}

extern "C" int fn_02bd5618(void*);

extern "C" s32 fn_02bd5804(void *arg0) {
    s32 result = 1;
    if (fn_02bd5618(arg0) == 0) {
        result = ((Node *)arg0)->flags & 1;
    }
    return result;
}
