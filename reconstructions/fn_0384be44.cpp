typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void* fn_0378c550(void *);

extern "C" void *fn_0384be44(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x10U), ((var_r31 == 0) == 0))) {
        (*(s32 *)((char *)(var_r31) + (0))) = 0;
        fn_0378c550((char *)var_r31 + 4);
        (*(s32 *)((char *)(var_r31) + (0xC))) = 0;
    }
    return var_r31;
}
