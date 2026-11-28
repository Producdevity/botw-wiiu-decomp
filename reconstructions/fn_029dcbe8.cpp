typedef short s16;
typedef int s32;
extern "C" int fn_029dd06c(void*);

namespace {
struct Object {
    char padding_0[0x48];
    s16 value_48;
};
}

extern "C" s32 fn_029dcbe8(void *object) {
    if (fn_029dd06c(object) == 0) {
        return 0;
    }
    ((Object *) object)->value_48 = 0;
    return 1;
}
