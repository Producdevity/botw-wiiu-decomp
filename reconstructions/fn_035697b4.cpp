typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0356909c(void*);
extern "C" void fn_03569604(void*);
extern "C" void fn_035696b4(void*);
extern "C" void fn_03569734(void);

namespace {
struct Object {
    char padding_0[0xC];
    s32 value_c;
    char padding_10[0xA85];
    u8 enabled;
};
}

extern "C" void fn_035697b4(void *object) {
    if (((Object *) object)->enabled != 0 && ((Object *) object)->value_c != 0) {
        fn_0356909c(object);
        fn_03569604(object);
        fn_035696b4(object);
        fn_03569734();
    }
}
