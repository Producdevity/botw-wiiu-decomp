typedef int s32;

extern "C" int fn_03a74d04(void*);
extern "C" void fn_03a74d6c(int, int);

extern "C" s32 fn_03a74d7c(void) {
    struct { s32 f8; } sp;
    s32 temp_r31;

    sp.f8 = 0;
    temp_r31 = fn_03a74d04(&sp.f8);
    if (sp.f8 != 0) {
        fn_03a74d6c(sp.f8, temp_r31);
    }
    return temp_r31;
}
