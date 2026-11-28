typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0311f8b8(void*, int);

namespace {
struct Owner {
    char padding_0[4];
    void *child;
};
}

extern "C" u8 fn_0313dab0(void *object) {
    Owner *owner = (Owner *)object;
    s32 result;
    void *child;

    child = owner->child;
    result = 0;
    if ((child != 0) && (fn_0311f8b8(child, 1) != 0)) {
        result = 1;
    }
    return result;
}
