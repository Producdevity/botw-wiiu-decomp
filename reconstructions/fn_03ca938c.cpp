typedef int s32;

extern "C" int fn_03ca2fc4(void*, void*);

extern "C" s32 fn_03ca938c(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = -1;
    temp_r3 = fn_03ca2fc4(arg1, arg0);
    if (temp_r3 != 0) {
        var_r31 = (*(s32 *)((char *)(temp_r3) + (0x2E8)));
    }
    return var_r31;
}
