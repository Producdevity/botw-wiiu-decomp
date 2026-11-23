typedef int s32;

extern "C" int fn_0331dafc(void*);
extern "C" int fn_03799e00(void *);

extern "C" s32 fn_020af61c(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    s32 temp_r3;
    s32 temp_r3_2;

    if ((fn_03799e00(arg0) != 0) || ((temp_r3 = ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xE8)))[263])(arg0), ((temp_r3 == 0) == 0)) && (temp_r3_2 = fn_0331dafc((void *)(temp_r3 + 0x100)), ((temp_r3_2 == 0) == 0)) && (((s32 (*)())(vt2 = *(void* const**)((char *)(temp_r3_2) + (0xE8)))[101])() != 0))) {
        return 1;
    }
    return 0;
}
