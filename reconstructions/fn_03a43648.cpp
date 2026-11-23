typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030be71c(void*);

extern "C" s32 data_1035df40;
extern "C" s32 data_1035df78;

extern "C" void *fn_03a43648(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x1F4U), ((var_r31 == 0) == 0))) {
        fn_030be71c(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x130))) = &data_1035df40;
        (*(s32 **)((char *)(var_r31) + (0x140))) = &data_1035df78;
    }
    return var_r31;
}
