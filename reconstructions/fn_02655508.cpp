typedef signed char s8;
typedef int s32;

extern "C" int fn_02654be8(void*);
extern "C" bool fn_02654c28(char *);
extern "C" void fn_02654c40(void*);
extern "C" bool fn_02654e14(void *);
extern "C" void fn_02654e2c(void*, void*);
extern "C" void fn_02654fbc(void*);
extern "C" bool fn_02655324(void *);

extern "C" s32 fn_02655508(s8 *arg0) {
    if (fn_02654be8(arg0) != 0) {
        fn_02654c40(arg0);
        return 1;
    }
    if (fn_02654e14(arg0) != 0) {
        fn_02654e2c(arg0, (*(void **)((char *)(arg0) + (0x3C))));
        return 1;
    }
    if ((fn_02655324(arg0) == 0) && (fn_02654c28((char *)(arg0)) != 0)) {
        fn_02654fbc(arg0);
    }
    return 0;
}
