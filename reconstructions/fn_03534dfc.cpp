typedef signed char s8;
typedef int s32;

extern "C" void fn_03534da0(void);
extern "C" void fn_03571f68(void*, int);
extern "C" char* data_1047c390;

extern "C" s32 data_104722a8;

extern "C" void fn_03534dfc(void) {
    void *temp_r12;

    fn_03534da0();
    fn_03571f68((void *)(data_104722a8 + 0x180), 1);
    if ((s8 *) data_1047c390 != 0) {
        temp_r12 = (*(void **)((char *)(data_1047c390) + (0x28)));
        if (temp_r12 != 0) {
            (*(s32 *)((char *)(temp_r12) + (0x70))) = 0;
        }
    }
}
