typedef int s32;
typedef unsigned int u32;

extern "C" int fn_02f51834(void);

extern "C" s32 data_10532b44;

extern "C" s32 fn_02f55df8(void) {
    s32 temp_r3;
    s32 var_r12;

    temp_r3 = fn_02f51834();
    if (temp_r3 >= 6) {
        return 0;
    }
    var_r12 = (*(s32 *)((char *)(&data_10532b44) + (4)));
    if ((u32) temp_r3 < (u32) (*(u32 *)((char *)(&data_10532b44) + (0)))) {
        var_r12 += temp_r3 * 0x5C;
    }
    return var_r12;
}
