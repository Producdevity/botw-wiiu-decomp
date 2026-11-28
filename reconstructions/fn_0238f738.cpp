typedef int s32;
extern "C" int fn_0213f0a4(int);

namespace {
struct Object {
    char padding_0[0x84];
    s32 *state;
};
}

extern "C" s32 fn_0238f738(void *object) {
    if (*((Object *) object)->state == 1) {
        return fn_0213f0a4((s32) object) | 8;
    }
    return fn_0213f0a4((s32) object);
}
