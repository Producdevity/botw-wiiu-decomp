typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_03485c18(const void *);

namespace {
struct Owner {
    char padding_0[0x50];
    void *child;
};
}

extern "C" u8 fn_032e0348(void *object) {
    Owner *owner = (Owner *)object;
    s32 result;
    void *child;

    child = owner->child;
    result = 1;
    if ((child != 0) && (fn_03485c18(child) != 0)) {
        result = 0;
    }
    return result;
}
