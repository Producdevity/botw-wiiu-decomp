typedef unsigned char u8;
typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_03b2c334(void*);
extern "C" const unsigned char data_10354484[];

extern "C" s32 data_103546bc;

extern "C" void *fn_039f5fd0(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0xCC8U), ((var_r31 == 0) == 0))) {
        fn_03b2c334(var_r31);
        (*(s32 **)((char *)(var_r31) + (0x18))) = &data_103546bc;
        (*(u8 **)((char *)(var_r31) + (0x1C))) = (u8 *)(data_10354484);
    }
    return var_r31;
}
