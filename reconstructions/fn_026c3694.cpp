typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02b7a6d4(void*);

extern "C" u8 fn_026c3694(void **arg0) {
    s32 temp_r3;
    u8 var_r0;

    temp_r3 = fn_02b7a6d4(*arg0);
    if (temp_r3 == 0) {
        return 0U;
    }
    var_r0 = (*(u8 *)((char *)(temp_r3) + (0xF)));
    if ((s32) var_r0 == 0) {
        var_r0 = (*(u8 *)((char *)(temp_r3) + (0xD)));
    }
    return var_r0;
}
