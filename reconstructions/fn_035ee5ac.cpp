typedef int s32;

extern "C" void fn_035ee4b8(void*, int);
extern "C" void fn_035ee59c(void*);

extern "C" void fn_035ee5ac(void *arg0) {
    fn_035ee4b8(arg0, 1);
    fn_035ee59c(arg0);
    (*(s32 *)((char *)(arg0) + (0x18))) = (s32) ((*(s32 *)((char *)(arg0) + (0x18))) | 7);
}
