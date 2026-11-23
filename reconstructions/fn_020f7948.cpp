typedef unsigned char u8;
typedef int s32;

extern "C" int fn_020f7874(void*);

extern "C" u8 fn_020f7948(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) (*(u8 *)((char *)(arg0) + (0x88))) != 0) && (fn_020f7874(arg0) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}
