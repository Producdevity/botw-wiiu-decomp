typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;
typedef float f32;

extern "C" int fn_02b62774(void*);
extern "C" void* data_10463748;

extern "C" f32 data_100dfcec;

extern "C" s32 fn_02560bd8(void *arg0) {
    void *temp_r31;

    temp_r31 = data_10463748;
    if ((temp_r31 == 0) || ((s32) *(*(u8 **)((char *)(arg0) + (0x20))) == 0) || (fn_02b62774(arg0) != 0) || (((u32) (*(u32 *)((char *)(((char *)temp_r31 + (((*(s32 *)((char *)(temp_r31) + (0x14))) ^ 1) * 4))) + (0xA80))) >> 2U) & 1) || !((*(f32 *)((char *)(temp_r31) + (0xA98))) > data_100dfcec)) {
        return 1;
    }
    return 0;
}
