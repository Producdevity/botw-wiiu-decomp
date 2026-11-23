typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02de42bc(void*, int);

extern "C" u8 fn_02cd4b68(void *arg0) {
    s32 var_r31;

    var_r31 = 1;
    if (((s32) (*(u8 *)((char *)(arg0) + (0x10))) == 0) && (fn_02de42bc((*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0x1298))), 2) == 0)) {
        var_r31 = 0;
    }
    return var_r31;
}
