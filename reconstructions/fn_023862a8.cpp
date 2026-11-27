typedef int s32;

extern "C" int fn_02386274(void*);
extern "C" void fn_0307359c(void*);

namespace {
struct Object {
    char padding_0[0x10];
    void **slot;
};
}

extern "C" s32 fn_023862a8(void *arg0) {
    Object *object = (Object *)arg0;
    void **slot;
    s32 index;

    slot = object->slot;
    if (slot == 0 || (index = fn_02386274(*slot), index == -1)) {
        return 0;
    }
    fn_0307359c((void *)index);
    return 1;
}
