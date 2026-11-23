typedef unsigned short u16;
typedef int s32;

extern "C" s32 fn_0382facc(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (!((*(u16 *)((char *)(arg0) + (0x12))) & (u16) (1 << arg1)) && ((arg2 != 0) || ((arg3 == 0) && (arg4 != 0) && (((u16) (*(u16 *)((char *)(arg0) + (0xE))) >> 9U) & 1)))) {
        return 1;
    }
    return 0;
}
