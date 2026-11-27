typedef int s32;

extern "C" int fn_035fd628(void*);

namespace {
struct Resolved {
    char padding_0[0x4EC];
    s32 value;
};
struct Object {
    char padding_0[0x70];
    s32 value;
};
}

extern "C" s32 fn_035ff2ac(void *object) {
    s32 resolved;

    resolved = fn_035fd628(object);
    if (resolved != 0) {
        return ((Resolved *)resolved)->value;
    }
    return ((Object *)object)->value;
}
