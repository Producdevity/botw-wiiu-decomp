typedef int s32;

namespace {
struct Object {
    char padding_0[0x34];
    s32 result;
    char padding_38[4];
    s32 value_3c;
    s32 value_40;
    s32 value_44;
    s32 value_48;
};
}

extern "C" s32 fn_03cbcf58(void *object, s32 *first, s32 *second, s32 *third, s32 *fourth) {
    if (first != 0) {
        *first = ((Object *) object)->value_3c;
    }
    if (second != 0) {
        *second = ((Object *) object)->value_40;
    }
    if (third != 0) {
        *third = ((Object *) object)->value_44;
    }
    if (fourth != 0) {
        *fourth = ((Object *) object)->value_48;
    }
    return ((Object *) object)->result;
}
