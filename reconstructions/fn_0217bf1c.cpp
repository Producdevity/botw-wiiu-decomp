typedef unsigned char u8;
typedef int s32;

extern "C" int fn_021d0df0(void*);

extern "C" u8 fn_0217bf1c(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) (*(u8 *)((char *)(arg0) + (0x24))) == 0) && (fn_021d0df0(arg0) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
