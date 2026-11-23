typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0386d1a8(void *, unsigned);

extern "C" s32 fn_03191aec(s32 arg0, void *arg1) {
    fn_0386d1a8((void *)(arg0 + 0x14), (*(u32 *)((char *)(arg1) + (0))));
    fn_0386d1a8((void *)(arg0 + 0xE8), (*(u32 *)((char *)(arg1) + (4))));
    return 1;
}
