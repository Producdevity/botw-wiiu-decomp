typedef signed char s8;
typedef int s32;

extern "C" void fn_02a2fcdc(void*, void*);

extern "C" void *data_104637ac;

namespace {
struct Object {
    void *owner;
    char padding_4[0x5C];
    s8 flag_60;
    s8 flag_61;
};
}

extern "C" s32 fn_0271edc4(void *object) {
    if (data_104637ac != 0) {
        fn_02a2fcdc(data_104637ac, ((Object *) object)->owner);
    }
    ((Object *) object)->flag_60 = 0;
    ((Object *) object)->flag_61 = 0;
    return 1;
}
