typedef int s32;

extern "C" void fn_02f27760(void*);
extern "C" void* fn_0308e578(unsigned);

extern "C" void *fn_02fc7900(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x5CU), ((var_r31 == 0) == 0))) {
        fn_02f27760(var_r31);
        (*(s32 *)((char *)(var_r31) + (0x54))) = 0;
        (*(s32 *)((char *)(var_r31) + (0x58))) = -1;
    }
    return var_r31;
}
