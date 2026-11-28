typedef int s32;

extern "C" void fn_0434d1c8(void*, void*, int);

namespace {
struct Object {
    char padding_0[0x30];
    s32 value;
};
}

extern "C" s32 fn_03cac378(void *object, void *destination) {
    s32 value;

    if (destination == 0) {
        return -1;
    }
    value = ((Object *) object)->value;
    fn_0434d1c8(destination, &value, 4);
    return 0;
}
