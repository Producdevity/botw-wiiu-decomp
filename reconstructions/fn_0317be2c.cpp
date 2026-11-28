typedef signed char s8;
typedef int s32;

extern "C" void fn_0317a908(void*, void*);

extern "C" s32 data_1046ce60;

namespace {
struct Object {
    char padding_0[0x26F];
    s8 flag;
};
}

extern "C" s32 fn_0317be2c(void *object) {
    if (data_1046ce60 != 0) {
        fn_0317a908((void *) (data_1046ce60 + 0x14), object);
        ((Object *) object)->flag = 0;
    }
    return 1;
}
