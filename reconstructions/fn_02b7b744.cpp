typedef int s32;
extern "C" void fn_037ad824(void*, int);

namespace {
struct Object {
    char padding_0[0x364];
    s32 flags;
};
}

extern "C" void fn_02b7b744(void *object) {
    fn_037ad824(object, 0x10);
    fn_037ad824(object, 4);
    ((Object *) object)->flags &= 0xFFFEFFFF;
}
