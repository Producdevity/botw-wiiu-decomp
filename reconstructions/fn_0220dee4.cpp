typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0220de2c(void*);

extern "C" u8 fn_0220dee4(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if (!(((u8) (*(u8 *)((char *)(arg0) + (0xB))) >> 1U) & 1) && (((s32) *(*(s32 **)((char *)(arg0) + (0x10))) != 1) || (fn_0220de2c(arg0) == 0))) {
        var_r31 = 0;
    }
    return var_r31;
}
