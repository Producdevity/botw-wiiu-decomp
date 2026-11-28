typedef int s32;

extern "C" int fn_03485c8c(void*);
extern "C" void fn_034a3fe8(void);

namespace {
struct Object {
    char padding_0[0x50];
    s32 flags;
    char padding_54[0x2C];
    s32 value_80;
};
}

extern "C" void fn_0348d58c(void *object) {
    if ((((Object *) object)->flags & 1) && ((Object *) object)->value_80 != 0 && fn_03485c8c(object) != 0) {
        fn_034a3fe8();
    }
}
