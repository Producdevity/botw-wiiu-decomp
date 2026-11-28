typedef int s32;

extern "C" int fn_035fd628(void*);

namespace {
struct Other {
    unsigned char padding_0[0x43C];
    s32 value;
};

struct Object {
    unsigned char padding_0[0x6C];
    s32 value;
};
}

extern "C" s32 fn_035ff1f8(void *object) {
    Other *other = (Other *)fn_035fd628(object);
    if (other != 0) {
        return other->value;
    }
    return ((Object *)object)->value;
}
