typedef signed char s8;
typedef int s32;

extern "C" int fn_02654be8(void*);
extern "C" bool fn_02654c28(char *);
extern "C" void fn_02654c40(void*);
extern "C" bool fn_02654e14(void *);
extern "C" void fn_02654e2c(void*, void*);
extern "C" void fn_02654fbc(void*);
extern "C" bool fn_02655324(void *);

namespace {
struct Object {
    char padding_0[0x3C];
    void *target;
};

inline Object *fields(s8 *object) {
    return reinterpret_cast<Object *>(object);
}
}

extern "C" s32 fn_02655508(s8 *object) {
    if (fn_02654be8(object) != 0) {
        fn_02654c40(object);
        return 1;
    }
    if (fn_02654e14(object) != 0) {
        fn_02654e2c(object, fields(object)->target);
        return 1;
    }
    if (fn_02655324(object) == 0 && fn_02654c28(reinterpret_cast<char *>(object)) != 0) {
        fn_02654fbc(object);
    }
    return 0;
}
