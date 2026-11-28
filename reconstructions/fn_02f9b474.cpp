typedef int s32;

extern "C" void fn_03606750(void*, int);
extern "C" int fn_03a3e8ac(void*);

extern "C" s32 fn_02f9b474(void *object) {
    if (fn_03a3e8ac(object) == 0) {
        fn_03606750(object, -1);
        return 1;
    }
    return 0;
}
