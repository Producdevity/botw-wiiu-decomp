typedef int s32;

extern "C" s32 fn_03cbcf58(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    if (arg1 != 0) {
        *arg1 = (*(s32 *)((char *)(arg0) + (0x3C)));
    }
    if (arg2 != 0) {
        *arg2 = (*(s32 *)((char *)(arg0) + (0x40)));
    }
    if (arg3 != 0) {
        *arg3 = (*(s32 *)((char *)(arg0) + (0x44)));
    }
    if (arg4 != 0) {
        *arg4 = (*(s32 *)((char *)(arg0) + (0x48)));
    }
    return (*(s32 *)((char *)(arg0) + (0x34)));
}
