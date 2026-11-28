typedef int s32;
extern "C" int fn_0378dce8(int, void*, void*);

namespace {
struct Object {
    char padding_0[0x28];
    s32 state;
};
}

extern "C" s32 fn_034de884(void *object, void *other) {
    if (other != 0 && ((Object *) object)->state == 1 && fn_0378dce8((s32) object, other, 0) != 0) {
        return 1;
    }
    return 0;
}
