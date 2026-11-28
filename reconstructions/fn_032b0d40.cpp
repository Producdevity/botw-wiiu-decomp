typedef int s32;
extern "C" void fn_03392224(void*);
extern "C" void fn_0339227c(void*);

namespace {
struct Object {
    char padding_0[0x10];
    s32 *value;
};
}

extern "C" s32 fn_032b0d40(void *object) {
    if (*((Object *) object)->value != 0) {
        fn_0339227c(object);
        return 1;
    }
    fn_03392224(0);
    return 1;
}
