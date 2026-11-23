typedef int s32;

extern "C" int fn_0378dce8(int, void*, void*);

extern "C" void fn_02051510(void *arg0, void *arg1) {
    void* const* vt1;
    s32 temp_r31;

    temp_r31 = (*(s32 *)((char *)(arg0) + (8)));
    if (temp_r31 != 0) {
        fn_0378dce8(temp_r31, arg1, 0);
        ((s32 (*)(s32, s32))(vt1 = *(void* const**)((char *)(temp_r31) + (0x14)))[21])(temp_r31, temp_r31);
    }
}
