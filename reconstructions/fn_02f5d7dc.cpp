typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02f03a14(void*);

namespace {
struct Owner {
    char padding_0[0x1B68];
    void *child;
};
}

extern "C" u8 fn_02f5d7dc(void *object) {
    Owner *owner = (Owner *)object;
    s32 result;
    void *child;

    child = owner->child;
    result = 0;
    if ((child != 0) && (fn_02f03a14(child) != 0)) {
        result = 1;
    }
    return result;
}
