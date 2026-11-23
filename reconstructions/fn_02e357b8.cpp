typedef signed char s8;
typedef int s32;

extern "C" void fn_02e2a248(void *, unsigned char);
extern "C" void fn_03070fd8(int);
extern "C" void* data_10467be0;
extern "C" void* data_1047c244;

extern "C" void fn_02e357b8(s32 arg0) {
    if (arg0 != 0) {
        fn_03070fd8(0);
    }
    fn_02e2a248(data_10467be0, 1U);
    (*(s8 *)((char *)(data_1047c244) + (0x113))) = 5;
}
