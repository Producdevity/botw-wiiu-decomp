typedef unsigned short u16;
typedef int s32;

namespace {
struct VirtualObject {
    char padding_0[0xE8];
    void *const *vtable;
};

struct Info {
    char padding_0[0x18];
    u16 flags;
};
}

extern "C" s32 fn_02b29278(void **object) {
    void *owner = *object;
    void *const *vtable = ((VirtualObject *)owner)->vtable;
    Info *info = ((Info *(*)(void *))vtable[261])(owner);
    s32 result = 0;
    if (info != 0) {
        result = info->flags & 1;
    }
    return result;
}
