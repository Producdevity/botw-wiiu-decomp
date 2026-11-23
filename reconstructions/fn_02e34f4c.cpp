typedef signed char s8;

extern "C" void fn_02e2a248(void *, unsigned char);
extern "C" void fn_03070fd8(int);
extern "C" void* data_10467be0;
extern "C" void* data_1047c244;

extern "C" void fn_02e34f4c(void) {
    fn_03070fd8(1);
    fn_02e2a248(data_10467be0, 0U);
    (*(s8 *)((char *)(data_1047c244) + (0x113))) = 1;
}
