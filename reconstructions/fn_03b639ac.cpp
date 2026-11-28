typedef signed char s8;
typedef int s32;
extern "C" void fn_03b64ef4(void*);

namespace {
struct Object {
    char padding_0[0x4B4];
    s32 value_4b4;
    char padding_4b8[4];
    s8 flag_4bc;
    char padding_4bd[3];
    s32 value_4c0;
};
}

extern "C" void fn_03b639ac(void *object) {
    ((Object *) object)->value_4c0 = -1;
    ((Object *) object)->value_4b4 = 0;
    fn_03b64ef4(object);
    ((Object *) object)->flag_4bc = 0;
}
