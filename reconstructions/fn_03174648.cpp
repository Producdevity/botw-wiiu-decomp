typedef int s32;
typedef unsigned int u32;

extern "C" unsigned fn_0317097c(const unsigned *);

extern "C" s32 fn_03174648(void *arg0, u32 *arg1) {
    s32 (*temp_r31)();
    s32 var_r3;

    temp_r31 = (*(s32 (**)())((char *)(arg0) + (0x6B0)));
    var_r3 = 0;
    if (temp_r31 != 0) {
        fn_0317097c(arg1);
        var_r3 = temp_r31();
    }
    return var_r3;
}
