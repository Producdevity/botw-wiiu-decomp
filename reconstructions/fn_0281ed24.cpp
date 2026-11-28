typedef int s32;
extern "C" int fn_0280034c(void*);

namespace {
struct Object {
    s32 base;
    char padding_4[0x184];
    s32 value_188;
};
}

extern "C" s32 fn_0281ed24(void *object) {
    if (fn_0280034c(object) == 0) {
        return 0;
    }
    ((Object *) object)->value_188 = ((Object *) object)->base + 0x3D4;
    return 1;
}
