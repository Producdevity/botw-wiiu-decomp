typedef int s32;
extern "C" int fn_02dbef38(void*, void*);

namespace {
struct Object {
    char padding_0[0x18];
    s32 value_18;
};
}

extern "C" s32 fn_02dbf0b8(void *object, void *other) {
    if (fn_02dbef38(object, other) != 0 && ((Object *) object)->value_18 == 1) {
        return 1;
    }
    return 0;
}
