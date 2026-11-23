typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03c91c08(void*);

extern "C" u8 fn_02ec9aa4(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) (*(s32 *)((char *)(arg0) + (0x48))) == 7) && (fn_03c91c08(arg0) == 2)) {
        var_r31 = 1;
    }
    return var_r31;
}
