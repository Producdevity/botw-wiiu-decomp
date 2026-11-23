typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" char* data_1047c390;

extern "C" f32 data_102e32b8;
extern "C" f32 data_102e3360;

extern "C" s32 fn_03567e24(void *arg0) {
    void *temp_r12;

    temp_r12 = (*(void **)((char *)(data_1047c390) + (0x1C)));
    if (((temp_r12 != 0) && (((s32) (*(u8 *)((char *)(temp_r12) + (0x58))) != 0) || !((*(f32 *)((char *)(temp_r12) + (0x8C))) > data_102e3360))) || !((*(f32 *)((char *)(arg0) + (0x458))) < data_102e32b8)) {
        return 0;
    }
    return 1;
}
