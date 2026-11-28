typedef int s32;
extern "C" void fn_02d4b3d4(void *, int);

namespace {
struct Object {
    char padding_0[0x854];
    s32 flags;
    char padding_858[0x115C];
    s32 value_19b4;
};
}

extern "C" void fn_02d8b0a8(void *object) {
    fn_02d4b3d4(object, 1);
    ((Object *) object)->value_19b4 = 0;
    ((Object *) object)->flags |= 0x800000;
}
