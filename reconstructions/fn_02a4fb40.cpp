typedef int s32;
typedef unsigned int u32;

extern "C" int fn_0330e9c0(void*);

extern "C" void *data_1046d780;

extern "C" s32 fn_02a4fb40(void) {
    s32 temp_r3;

    if ((void *) data_1046d780 != 0) {
        temp_r3 = fn_0330e9c0(data_1046d780);
        if (((u32) (temp_r3 | (temp_r3 - 1)) >> 0x1FU) == 0) {
            return 1;
        }
    }
    return 0;
}
