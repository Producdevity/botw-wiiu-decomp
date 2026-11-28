typedef int s32;
extern "C" void fn_037afdc0(void*, int);

namespace {
struct Object {
    char padding_0[0x364];
    s32 flags;
};
}

extern "C" void fn_02b7b6fc(void *object) {
    fn_037afdc0(object, 0x10);
    fn_037afdc0(object, 4);
    ((Object *) object)->flags |= 0x10000;
}
