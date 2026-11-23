typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02b5c8fc(void*);

extern "C" s32 fn_028f655c(void *arg0) {
    s32 temp_r3;

    if ((s32) *(*(u8 **)((char *)(arg0) + (0x40))) != 0) {
        temp_r3 = fn_02b5c8fc((*(void **)((char *)(arg0) + (0))));
        if (temp_r3 != 0) {
            return ((u8) (*(u8 *)((char *)(temp_r3) + (4))) >> 6U) & 1;
        }
    }
    return 0;
}
