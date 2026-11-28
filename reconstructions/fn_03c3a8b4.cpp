typedef signed char s8;
typedef int s32;

extern "C" void fn_03c380e8(void*);

namespace {
struct Object {
    char padding_0[0x29C];
    s32 value_29c;
    char padding_2a0[4];
    s32 value_2a4;
    s8 value_2a8;
    s8 value_2a9;
    s8 value_2aa;
    char padding_2ab[1];
    s32 value_2ac;
};
}

extern "C" void fn_03c3a8b4(void *object) {
    fn_03c380e8(object);
    ((Object *) object)->value_29c = 0;
    ((Object *) object)->value_2a4 = 0;
    ((Object *) object)->value_2a8 = -1;
    ((Object *) object)->value_2aa = 0;
    ((Object *) object)->value_2a9 = 1;
    ((Object *) object)->value_2ac = 0;
}
