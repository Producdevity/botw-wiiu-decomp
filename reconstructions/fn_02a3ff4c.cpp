typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_0378da88(void *);

extern "C" u8 fn_02a3ff4c(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) (*(s32 *)((char *)(arg0) + (0x40))) != 1) && (fn_0378da88((char *)arg0 + 0x14) == 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
