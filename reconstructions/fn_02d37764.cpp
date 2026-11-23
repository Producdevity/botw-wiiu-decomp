typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0378dc60(int, int);

extern "C" s32 fn_02d37764(void *arg0, s32 arg1) {
    if (!(((u32) (*(u32 *)((char *)(arg0) + (0x83C))) >> 0xEU) & 1) || (arg1 == 0)) {
        return 0;
    }
    fn_0378dc60(arg1, (s32) ((char *)arg0 + 0xDCC));
    return 1;
}
