typedef int s32;

extern "C" void fn_02592c40(void*);
extern "C" void fn_02950880(int);

namespace {
struct Object {
    s32 value;
    char padding_4[0x78];
    s32 flags;
};
}

extern "C" void fn_02592d54(void *object) {
    fn_02950880(((Object *) object)->value);
    ((Object *) object)->flags &= ~4;
    fn_02592c40(object);
}
