typedef int s32;
typedef unsigned int u32;

extern "C" int fn_0348d5d0(void*);
extern "C" unsigned fn_034a3ffc(void *);

namespace {
struct Object {
    unsigned char padding_0[0x50];
    s32 flags;
    unsigned char padding_54[0x2C];
    s32 handle;
};
}

extern "C" u32 fn_0348d658(void *object) {
    s32 target;

    if ((((Object *)object)->flags & 1) && (((Object *)object)->handle != 0)) {
        target = fn_0348d5d0(object);
        if (target != 0) {
            return fn_034a3ffc((void *) target);
        }
    }
    return 0U;
}
