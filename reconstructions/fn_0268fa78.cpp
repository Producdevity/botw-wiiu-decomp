typedef signed char s8;
typedef int s32;
typedef unsigned int u32;

extern "C" s32 fn_0268fa78(void *arg0) {
    s32 var_r8;
    s8 *temp_r9;

    var_r8 = 0;
loop_1:
    temp_r9 = (s8 *)((char *)arg0 + 0x84 + var_r8);
    var_r8 += 1;
    *temp_r9 = 0;
    if (var_r8 < 3) {
loop_3:
        if ((u32) var_r8 >= 3U) {
            var_r8 += 1;
            (*(s8 *)((char *)(arg0) + (0x84))) = 0;
            if (var_r8 < 3) {
                goto loop_3;
            }
        } else {
            goto loop_1;
        }
    }
    return 1;
}
