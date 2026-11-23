typedef unsigned char u8;
typedef int s32;

extern "C" s32 fn_0224c80c(void *arg0) {
    s32 var_r0;

    var_r0 = 1 << *(*(s32 **)((char *)(arg0) + (0x1C)));
    if ((s32) *(*(u8 **)((char *)(arg0) + (0x3C))) != 0) {
        var_r0 |= 8;
    } else if ((s32) *(*(u8 **)((char *)(arg0) + (0x40))) != 0) {
        var_r0 |= 0x100;
    }
    return var_r0;
}
