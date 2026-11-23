typedef int s32;
typedef float f32;

extern "C" f32 data_100b3374;

extern "C" s32 fn_0242d6c0(void *arg0) {
    void *temp_r12;
    void *temp_r12_2;

    if (!((*(f32 *)((char *)(arg0) + (0x2C))) > data_100b3374)) {
        temp_r12 = (*(void **)((char *)(arg0) + (0x84)));
        if (temp_r12 != 0) {
            temp_r12_2 = (*(void **)((char *)(temp_r12) + (0x68)));
            if ((temp_r12_2 != 0) && ((s32) (*(s32 *)((char *)(temp_r12_2) + (0x58))) != 0)) {
                return 1;
            }
        }
    }
    return 0;
}
