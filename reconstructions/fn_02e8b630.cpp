typedef signed char s8;
typedef int s32;

extern "C" int fn_02e89a1c(void*);
extern "C" int fn_02e89ab4(void*);
extern "C" int fn_02e89b4c(void*);

namespace {
struct Object {
    char padding_0[0x18];
    s32 value_18;
    s32 value_1c;
    s32 value_20;
    char padding_24[0x29];
    s8 flag;
};
}

extern "C" void fn_02e8b630(void *object) {
    ((Object *) object)->value_18 = fn_02e89a1c(object);
    ((Object *) object)->value_1c = fn_02e89ab4(object);
    ((Object *) object)->value_20 = fn_02e89b4c(object);
    ((Object *) object)->flag = 0;
}
