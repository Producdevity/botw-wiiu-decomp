typedef int s32;
typedef unsigned int u32;

extern "C" int fn_0330e9c0(void*);

extern "C" void *data_1046d780;

extern "C" s32 fn_02a4fb40(void) {
    if (data_1046d780 != 0) {
        s32 count = fn_0330e9c0(data_1046d780);
        if (((u32)(count | (count - 1)) >> 31U) == 0) {
            return 1;
        }
    }
    return 0;
}
