typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03c41b9c(void*);

extern "C" s32 data_103ddce0;

extern "C" void *fn_03c44278(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x224U), ((var_r31 == 0) == 0))) {
        fn_03c41b9c(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x21C))) = &data_103ddce0;
    }
    return var_r31;
}
