typedef unsigned char u8;
typedef int s32;

extern "C" void fn_028d8bd8(void*);
extern "C" int fn_0378c7b0(void*);
extern "C" void fn_0378c840(void*);

namespace {
struct Object {
    char padding_0[0x38];
    s32 handle;
    u8 valid;
};
}

extern "C" void fn_028d8dfc(void *object) {
    if (((Object *)object)->handle != 0 || ((Object *)object)->valid != 0) {
        if (fn_0378c7b0((char *)object + 0x38) != 0) {
            fn_0378c840((char *)object + 0x38);
            fn_028d8bd8(object);
        }
    } else {
        fn_028d8bd8(object);
    }
}
