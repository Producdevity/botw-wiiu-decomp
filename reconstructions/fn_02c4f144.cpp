typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" s32 data_101c6014;

extern "C" void fn_02c4f144(s32 arg0, void *arg1) {
    s32 var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = (s32)(fn_0308e578(8U)), ((var_r3 == 0) == 0))) {
        (*(void **)((char *)(var_r3) + (4))) = arg1;
        (*(s32 **)((char *)(var_r3) + (0))) = &data_101c6014;
    }
}
