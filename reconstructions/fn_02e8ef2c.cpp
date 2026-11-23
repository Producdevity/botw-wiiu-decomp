typedef int s32;

extern "C" void fn_02e8eb14(void*, int, int);
extern "C" void fn_02f74348(int);

extern "C" void fn_02e8ef2c(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r31 = (*(s32 *)((char *)(arg0) + (0x10)));
    (*(s32 *)((char *)(arg0) + (0x10))) = 3;
    fn_02f74348(3);
    temp_r4 = (*(s32 *)((char *)(arg0) + (0x10)));
    fn_02e8eb14(arg0, temp_r4, temp_r4 - temp_r31);
}
