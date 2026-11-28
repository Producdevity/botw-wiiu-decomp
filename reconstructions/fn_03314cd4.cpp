struct HandleSlot;
struct HandleTarget;
extern "C" bool fn_0378da58(const HandleSlot *, const HandleTarget *);

namespace {
struct Object {
    char padding_0[0x10];
    char slot[1];
};
}

extern "C" int fn_03314cd4(void *object, void *target) {
    if (target != 0 && fn_0378da58((const HandleSlot *) ((Object *) object)->slot, (const HandleTarget *) target) != 0) {
        return 1;
    }
    return 0;
}
