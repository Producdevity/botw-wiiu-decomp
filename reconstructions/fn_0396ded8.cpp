typedef unsigned char u8;
typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_103467b0;

extern "C" void fn_0396ded8(void *arg0) {
    void *var_r3;

    var_r3 = arg0;
    if ((var_r3 != 0) || (var_r3 = fn_0308e578(8U), ((var_r3 == 0) == 0))) {
        (*(u8 **)((char *)(var_r3) + (4))) = (u8 *)(&data_10263910);
        (*(s32 **)((char *)(var_r3) + (0))) = &data_103467b0;
    }
}
