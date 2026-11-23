typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_0378da88(void *);

extern "C" u8 fn_0360ab8c(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if (((s32) (*(s32 *)((char *)(arg0) + (0x24))) == 6) && (fn_0378da88((char *)arg0 + 0x18) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
