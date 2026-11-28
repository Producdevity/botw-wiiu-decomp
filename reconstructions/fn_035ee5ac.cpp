typedef int s32;
extern "C" void fn_035ee4b8(void*, int);
extern "C" void fn_035ee59c(void*);

namespace {
struct Object {
    char padding_0[0x18];
    s32 flags;
};
}

extern "C" void fn_035ee5ac(void *object) {
    fn_035ee4b8(object, 1);
    fn_035ee59c(object);
    ((Object *) object)->flags |= 7;
}
