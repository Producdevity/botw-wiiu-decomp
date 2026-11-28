typedef int s32;

extern "C" void fn_03cafd7c(void*, unsigned, int);
extern "C" void fn_03cafdb0(void*, unsigned, int);
extern "C" void fn_03cafde4(void*, unsigned, int);
extern "C" void fn_03cafe18(void*, unsigned, int);
extern "C" void fn_03caff04(void*, unsigned, int);

namespace {
struct Object {
    char padding_0[0x34];
    void *target;
};

inline Object *fields(void *object) {
    return reinterpret_cast<Object *>(object);
}
}

extern "C" s32 fn_03cb0508(void *object, s32 index, void *first, void *second, void *third, void *fourth, void *fifth) {
    fn_03cafe18(fields(object)->target, index, reinterpret_cast<int>(first));
    fn_03cafd7c(fields(object)->target, index, reinterpret_cast<int>(second));
    fn_03cafdb0(fields(object)->target, index, reinterpret_cast<int>(third));
    fn_03cafde4(fields(object)->target, index, reinterpret_cast<int>(fourth));
    fn_03caff04(fields(object)->target, index, reinterpret_cast<int>(fifth));
    return 0;
}
